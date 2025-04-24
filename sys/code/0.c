/**
 * Basic File Operations Example
 * 
 * This program demonstrates fundamental file I/O operations in Unix:
 * - open(): Opening a file with different flags
 * - read(): Reading from a file
 * - write(): Writing to a file
 * - lseek(): Positioning within a file
 * - close(): Closing a file
 */

#include <fcntl.h>      /* For open flags: O_RDONLY, O_WRONLY, etc. */
#include <unistd.h>     /* For read, write, close, lseek */
#include <stdio.h>      /* For printf, perror */
#include <stdlib.h>     /* For exit */
#include <string.h>     /* For strlen */
#include <errno.h>      /* For errno */

#define BUFFER_SIZE 4096

int main(int argc, char *argv[]) {
    int fd;             /* File descriptor */
    int n;              /* Number of bytes read/written */
    char buffer[BUFFER_SIZE];
    off_t pos;          /* For lseek positioning */
    
    /* Check if the filename is provided */
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }
    
    /* Creating a new file for writing */
    if ((fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, 0644)) < 0) {
        perror("Failed to open file for writing");
        exit(1);
    }
    
    printf("File '%s' opened for writing with descriptor: %d\n", argv[1], fd);
    
    /* Write some data to the file */
    const char *data = "Hello, Unix System Programming!\nThis demonstrates basic file I/O.\n";
    if ((n = write(fd, data, strlen(data))) != strlen(data)) {
        perror("Failed to write to file");
        close(fd);
        exit(1);
    }
    
    printf("Wrote %d bytes to the file\n", n);
    
    /* Close the file */
    if (close(fd) < 0) {
        perror("Failed to close file");
        exit(1);
    }
    
    printf("File closed after writing\n");
    
    /* Open the file for reading */
    if ((fd = open(argv[1], O_RDONLY)) < 0) {
        perror("Failed to open file for reading");
        exit(1);
    }
    
    printf("File reopened for reading with descriptor: %d\n", argv[1], fd);
    
    /* Read data from the file */
    if ((n = read(fd, buffer, BUFFER_SIZE)) < 0) {
        perror("Failed to read from file");
        close(fd);
        exit(1);
    }
    
    /* Null-terminate the buffer to safely print it */
    buffer[n] = '\0';
    printf("Read %d bytes from the file:\n%s\n", n, buffer);
    
    /* Use lseek to position at the beginning of the file */
    if ((pos = lseek(fd, 0, SEEK_SET)) < 0) {
        perror("Failed to seek to the beginning");
        close(fd);
        exit(1);
    }
    
    printf("Used lseek to return to position %ld (beginning of file)\n", (long)pos);
    
    /* Read again from the beginning */
    if ((n = read(fd, buffer, 7)) < 0) {
        perror("Failed to read from file");
        close(fd);
        exit(1);
    }
    
    buffer[n] = '\0';
    printf("Read first %d bytes: %s\n", n, buffer);
    
    /* Seek to the middle of the file */
    if ((pos = lseek(fd, 10, SEEK_SET)) < 0) {
        perror("Failed to seek to position 10");
        close(fd);
        exit(1);
    }
    
    printf("Seeked to position %ld in the file\n", (long)pos);
    
    /* Read from the current position */
    if ((n = read(fd, buffer, 10)) < 0) {
        perror("Failed to read from file");
        close(fd);
        exit(1);
    }
    
    buffer[n] = '\0';
    printf("Read %d bytes from position %ld: %s\n", n, (long)pos, buffer);
    
    /* Close the file */
    if (close(fd) < 0) {
        perror("Failed to close file");
        exit(1);
    }
    
    printf("File closed after reading\n");
    return 0;
}