/**
 * File Hole and Symbolic Link Example
 * 
 * This program demonstrates:
 * 1. Creating a file with a "hole" using lseek
 * 2. Working with symbolic links
 */

#include <fcntl.h>      /* For open flags */
#include <unistd.h>     /* For read, write, close, lseek, symlink */
#include <stdio.h>      /* For printf, perror */
#include <stdlib.h>     /* For exit */
#include <string.h>     /* For strlen */
#include <sys/stat.h>   /* For stat structure and functions */

#define BUFFER_SIZE 512

void create_file_with_hole(const char *filename);
void create_and_read_symlink(const char *target, const char *linkname);
void display_file_info(const char *filename);

int main(int argc, char *argv[]) {
    const char *hole_file = "file_with_hole.dat";
    const char *link_name = "symlink_test";
    
    printf("=== Demonstrating File Hole Creation ===\n");
    create_file_with_hole(hole_file);
    
    printf("\n=== Demonstrating Symbolic Link Operations ===\n");
    create_and_read_symlink(hole_file, link_name);
    
    /* Display file information using stat */
    printf("\n=== File Information using stat ===\n");
    printf("Original file:\n");
    display_file_info(hole_file);
    
    printf("\nSymbolic link:\n");
    display_file_info(link_name);
    
    return 0;
}

/**
 * Creates a file with a hole by writing data at the beginning,
 * seeking forward, and writing data at the end
 */
void create_file_with_hole(const char *filename) {
    int fd;
    ssize_t n;
    off_t pos;
    
    /* Open file for writing */
    if ((fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644)) < 0) {
        perror("Failed to open file for hole creation");
        exit(1);
    }
    
    /* Write data at the beginning */
    char buf1[] = "Beginning of file before the hole";
    if ((n = write(fd, buf1, strlen(buf1))) != strlen(buf1)) {
        perror("Failed to write beginning of file");
        close(fd);
        exit(1);
    }
    
    printf("Wrote %ld bytes at the beginning of the file\n", (long)n);
    
    /* Create a hole by seeking forward 16KB without writing anything */
    if ((pos = lseek(fd, 16384, SEEK_CUR)) < 0) {
        perror("Failed to seek to create hole");
        close(fd);
        exit(1);
    }
    
    printf("Created a hole by seeking to position %ld\n", (long)pos);
    
    /* Write data at the end */
    char buf2[] = "End of file after the hole";
    if ((n = write(fd, buf2, strlen(buf2))) != strlen(buf2)) {
        perror("Failed to write end of file");
        close(fd);
        exit(1);
    }
    
    printf("Wrote %ld bytes at the end of the file\n", (long)n);
    
    /* Close the file */
    if (close(fd) < 0) {
        perror("Failed to close file with hole");
        exit(1);
    }
    
    /* Verify the file size */
    struct stat st;
    if (stat(filename, &st) < 0) {
        perror("Failed to stat file with hole");
        exit(1);
    }
    
    printf("File size: %ld bytes\n", (long)st.st_size);
    printf("Note: The file size includes the hole, but the hole doesn't occupy disk space\n");
}

/**
 * Creates a symbolic link to a target file and demonstrates
 * reading the link
 */
void create_and_read_symlink(const char *target, const char *linkname) {
    char buf[BUFFER_SIZE];
    ssize_t len;
    
    /* Create a symbolic link */
    if (symlink(target, linkname) < 0) {
        perror("Failed to create symbolic link");
        exit(1);
    }
    
    printf("Created symbolic link '%s' pointing to '%s'\n", linkname, target);
    
    /* Read the symbolic link */
    if ((len = readlink(linkname, buf, BUFFER_SIZE-1)) < 0) {
        perror("Failed to read symbolic link");
        exit(1);
    }
    
    /* Null-terminate the buffer since readlink doesn't do it */
    buf[len] = '\0';
    
    printf("Link content read with readlink: '%s'\n", buf);
    
    /* Open the file via the symbolic link */
    int fd;
    if ((fd = open(linkname, O_RDONLY)) < 0) {
        perror("Failed to open file via symbolic link");
        exit(1);
    }
    
    printf("Successfully opened the file through the symbolic link\n");
    
    /* Read first 10 bytes to show link works */
    char data[11];
    if (read(fd, data, 10) < 0) {
        perror("Failed to read from file via link");
        close(fd);
        exit(1);
    }
    
    data[10] = '\0';
    printf("First 10 bytes from file via link: '%s...'\n", data);
    
    close(fd);
}

/**
 * Displays file information using stat
 */
void display_file_info(const char *filename) {
    struct stat filestat;
    
    /* Use lstat to get info about the link itself, not the target */
    if (lstat(filename, &filestat) < 0) {
        perror("Failed to get file info");
        return;
    }
    
    printf("File: %s\n", filename);
    
    /* Determine file type */
    printf("Type: ");
    if (S_ISREG(filestat.st_mode))
        printf("regular file\n");
    else if (S_ISDIR(filestat.st_mode))
        printf("directory\n");
    else if (S_ISLNK(filestat.st_mode))
        printf("symbolic link\n");
    else if (S_ISFIFO(filestat.st_mode))
        printf("FIFO/pipe\n");
    else if (S_ISSOCK(filestat.st_mode))
        printf("socket\n");
    else if (S_ISCHR(filestat.st_mode))
        printf("character special\n");
    else if (S_ISBLK(filestat.st_mode))
        printf("block special\n");
    else
        printf("unknown type\n");
    
    /* Display size and link count */
    printf("Size: %ld bytes\n", (long)filestat.st_size);
    printf("Link count: %ld\n", (long)filestat.st_nlink);
    
    /* Display permissions in octal format */
    printf("Permissions: %o (octal)\n", filestat.st_mode & 0777);
}