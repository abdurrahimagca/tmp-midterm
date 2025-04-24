/**
 * Standard I/O Library Example
 * 
 * This program demonstrates the Standard I/O Library functions
 * covered in sys/md/7.md, including:
 * - fopen, fclose: File stream operations
 * - getc, putc: Character I/O
 * - fgets, fputs: Line I/O
 * - fread, fwrite: Binary I/O
 * - fseek, ftell: Stream positioning
 * - fflush: Buffer flushing
 */

#include <stdio.h>      /* Standard I/O functions */
#include <stdlib.h>     /* For exit */
#include <string.h>     /* For strlen, memset */

#define BUFFER_SIZE 1024

/* Define a simple structure for binary I/O demonstration */
struct Record {
    int id;
    float value;
    char name[32];
};

/* Function prototypes */
void character_io_example(const char *filename);
void line_io_example(const char *filename);
void stream_positioning_example(const char *filename);
void binary_io_example(const char *filename);
void copy_file_example(const char *src, const char *dest);

int main(int argc, char *argv[]) {
    const char *test_file = "stdio_test.txt";
    const char *binary_file = "binary_test.dat";
    const char *copy_dest = "file_copy.txt";
    
    printf("=== Standard I/O Library Examples ===\n\n");
    
    printf("1. Character I/O Example (getc, putc)\n");
    character_io_example(test_file);
    
    printf("\n2. Line I/O Example (fgets, fputs)\n");
    line_io_example(test_file);
    
    printf("\n3. Stream Positioning Example (fseek, ftell)\n");
    stream_positioning_example(test_file);
    
    printf("\n4. Binary I/O Example (fread, fwrite)\n");
    binary_io_example(binary_file);
    
    printf("\n5. File Copy Example\n");
    copy_file_example(test_file, copy_dest);
    
    return 0;
}

/**
 * Demonstrates character-by-character I/O using getc and putc
 */
void character_io_example(const char *filename) {
    FILE *fp;
    int c;
    
    /* Open file for writing */
    if ((fp = fopen(filename, "w")) == NULL) {
        perror("Failed to open file for writing");
        exit(1);
    }
    
    printf("Writing characters to file: '%s'\n", filename);
    
    /* Write characters to file using putc */
    const char *message = "Hello, Standard I/O!\nThis demonstrates character I/O using getc and putc.";
    for (int i = 0; message[i] != '\0'; i++) {
        if (putc(message[i], fp) == EOF) {
            perror("putc error");
            fclose(fp);
            exit(1);
        }
    }
    
    /* Flush buffered output to ensure it's written to disk */
    if (fflush(fp) != 0) {
        perror("fflush error");
        fclose(fp);
        exit(1);
    }
    
    printf("Successfully wrote %ld characters\n", (long)strlen(message));
    
    /* Close the file */
    if (fclose(fp) != 0) {
        perror("fclose error");
        exit(1);
    }
    
    /* Open file for reading */
    if ((fp = fopen(filename, "r")) == NULL) {
        perror("Failed to open file for reading");
        exit(1);
    }
    
    printf("Reading characters from file\n");
    
    /* Read characters from file using getc and count them */
    int count = 0;
    while ((c = getc(fp)) != EOF) {
        count++;
        /* Print first 20 characters for demonstration */
        if (count <= 20) {
            putchar(c);
        } else if (count == 21) {
            printf("...");
        }
    }
    
    /* Check for errors in getc */
    if (ferror(fp)) {
        perror("getc error");
        fclose(fp);
        exit(1);
    }
    
    printf("\nRead %d characters from file\n", count);
    
    /* Close the file */
    if (fclose(fp) != 0) {
        perror("fclose error");
        exit(1);
    }
}

/**
 * Demonstrates line-by-line I/O using fgets and fputs
 */
void line_io_example(const char *filename) {
    FILE *fp;
    char buffer[BUFFER_SIZE];
    
    /* Open file for writing */
    if ((fp = fopen(filename, "w")) == NULL) {
        perror("Failed to open file for writing");
        exit(1);
    }
    
    printf("Writing lines to file: '%s'\n", filename);
    
    /* Write several lines to the file using fputs */
    const char *lines[] = {
        "Line 1: This is an example of line I/O in C\n",
        "Line 2: Using fputs to write lines\n",
        "Line 3: And later fgets to read them back\n",
        "Line 4: Efficient for text processing\n",
        "Line 5: Each line ends with a newline character\n"
    };
    
    for (int i = 0; i < 5; i++) {
        if (fputs(lines[i], fp) == EOF) {
            perror("fputs error");
            fclose(fp);
            exit(1);
        }
    }
    
    printf("Successfully wrote 5 lines to file\n");
    
    /* Close the file */
    if (fclose(fp) != 0) {
        perror("fclose error");
        exit(1);
    }
    
    /* Open file for reading */
    if ((fp = fopen(filename, "r")) == NULL) {
        perror("Failed to open file for reading");
        exit(1);
    }
    
    printf("Reading lines from file:\n");
    
    /* Read and display lines using fgets */
    int line_count = 0;
    while (fgets(buffer, BUFFER_SIZE, fp) != NULL) {
        line_count++;
        printf("Read: %s", buffer); /* Note: fgets keeps the newline */
    }
    
    /* Check for errors in fgets */
    if (ferror(fp)) {
        perror("fgets error");
        fclose(fp);
        exit(1);
    }
    
    printf("Read %d lines from file\n", line_count);
    
    /* Close the file */
    if (fclose(fp) != 0) {
        perror("fclose error");
        exit(1);
    }
}

/**
 * Demonstrates stream positioning with fseek and ftell
 */
void stream_positioning_example(const char *filename) {
    FILE *fp;
    char buffer[BUFFER_SIZE];
    long pos;
    
    /* Open existing file for reading and writing */
    if ((fp = fopen(filename, "r+")) == NULL) {
        perror("Failed to open file for positioning example");
        exit(1);
    }
    
    /* Get the current position (should be at the beginning) */
    if ((pos = ftell(fp)) == -1) {
        perror("ftell error");
        fclose(fp);
        exit(1);
    }
    
    printf("Initial position: %ld\n", pos);
    
    /* Seek to the third line (approximate position) */
    if (fseek(fp, 80, SEEK_SET) != 0) {
        perror("fseek error");
        fclose(fp);
        exit(1);
    }
    
    /* Get the current position after seeking */
    if ((pos = ftell(fp)) == -1) {
        perror("ftell error");
        fclose(fp);
        exit(1);
    }
    
    printf("After seeking to position 80: %ld\n", pos);
    
    /* Read a line from the current position */
    if (fgets(buffer, BUFFER_SIZE, fp) == NULL) {
        if (ferror(fp)) {
            perror("fgets error");
            fclose(fp);
            exit(1);
        }
    } else {
        printf("Read from position %ld: %s", pos, buffer);
    }
    
    /* Seek to the end of the file */
    if (fseek(fp, 0, SEEK_END) != 0) {
        perror("fseek error");
        fclose(fp);
        exit(1);
    }
    
    /* Get the position at the end (which should be the file size) */
    if ((pos = ftell(fp)) == -1) {
        perror("ftell error");
        fclose(fp);
        exit(1);
    }
    
    printf("File size (position at end): %ld bytes\n", pos);
    
    /* Seek back from the end to read the last line */
    if (fseek(fp, -50, SEEK_END) != 0) {
        perror("fseek error");
        fclose(fp);
        exit(1);
    }
    
    /* Get the position */
    if ((pos = ftell(fp)) == -1) {
        perror("ftell error");
        fclose(fp);
        exit(1);
    }
    
    printf("After seeking -50 bytes from end: %ld\n", pos);
    
    /* Read a line from the current position */
    if (fgets(buffer, BUFFER_SIZE, fp) == NULL) {
        if (ferror(fp)) {
            perror("fgets error");
            fclose(fp);
            exit(1);
        }
    } else {
        printf("Read from position %ld: %s", pos, buffer);
    }
    
    /* Close the file */
    if (fclose(fp) != 0) {
        perror("fclose error");
        exit(1);
    }
}

/**
 * Demonstrates binary I/O with fread and fwrite
 */
void binary_io_example(const char *filename) {
    FILE *fp;
    struct Record records[3];
    struct Record read_records[3];
    
    /* Initialize some test records */
    records[0] = (struct Record){1, 10.5, "Record One"};
    records[1] = (struct Record){2, 20.75, "Record Two"};
    records[2] = (struct Record){3, 30.25, "Record Three"};
    
    /* Open file for binary writing */
    if ((fp = fopen(filename, "wb")) == NULL) {
        perror("Failed to open file for binary writing");
        exit(1);
    }
    
    printf("Writing binary data to file: '%s'\n", filename);
    
    /* Write the records in one batch */
    size_t written = fwrite(records, sizeof(struct Record), 3, fp);
    if (written != 3) {
        if (ferror(fp)) {
            perror("fwrite error");
        } else {
            fprintf(stderr, "fwrite: only wrote %zu records instead of 3\n", written);
        }
        fclose(fp);
        exit(1);
    }
    
    printf("Successfully wrote %zu records (%zu bytes)\n", 
           written, written * sizeof(struct Record));
    
    /* Close the file */
    if (fclose(fp) != 0) {
        perror("fclose error");
        exit(1);
    }
    
    /* Open file for binary reading */
    if ((fp = fopen(filename, "rb")) == NULL) {
        perror("Failed to open file for binary reading");
        exit(1);
    }
    
    printf("Reading binary data from file\n");
    
    /* Clear the buffer before reading */
    memset(read_records, 0, sizeof(read_records));
    
    /* Read the records back */
    size_t read_count = fread(read_records, sizeof(struct Record), 3, fp);
    if (read_count != 3) {
        if (ferror(fp)) {
            perror("fread error");
        } else if (feof(fp)) {
            fprintf(stderr, "fread: reached end of file after reading %zu records\n", read_count);
        }
        if (read_count == 0) {
            fclose(fp);
            exit(1);
        }
    }
    
    printf("Read %zu records from binary file:\n", read_count);
    
    /* Display the records read */
    for (size_t i = 0; i < read_count; i++) {
        printf("Record %zu: ID=%d, Value=%.2f, Name='%s'\n",
               i+1, read_records[i].id, read_records[i].value, read_records[i].name);
    }
    
    /* Close the file */
    if (fclose(fp) != 0) {
        perror("fclose error");
        exit(1);
    }
}

/**
 * Demonstrates copying a file using buffered I/O
 */
void copy_file_example(const char *src, const char *dest) {
    FILE *src_fp, *dest_fp;
    char buffer[BUFFER_SIZE];
    size_t bytes_read, bytes_written;
    size_t total_bytes = 0;
    
    /* Open source file for reading */
    if ((src_fp = fopen(src, "r")) == NULL) {
        perror("Failed to open source file");
        exit(1);
    }
    
    /* Open destination file for writing */
    if ((dest_fp = fopen(dest, "w")) == NULL) {
        perror("Failed to open destination file");
        fclose(src_fp);
        exit(1);
    }
    
    printf("Copying file '%s' to '%s'\n", src, dest);
    
    /* Read from source and write to destination in chunks */
    while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, src_fp)) > 0) {
        bytes_written = fwrite(buffer, 1, bytes_read, dest_fp);
        if (bytes_written != bytes_read) {
            perror("Write error");
            fclose(src_fp);
            fclose(dest_fp);
            exit(1);
        }
        total_bytes += bytes_written;
    }
    
    /* Check for read error */
    if (ferror(src_fp)) {
        perror("Read error");
        fclose(src_fp);
        fclose(dest_fp);
        exit(1);
    }
    
    printf("Successfully copied %zu bytes\n", total_bytes);
    
    /* Close both files */
    if (fclose(src_fp) != 0) {
        perror("Error closing source file");
        fclose(dest_fp);
        exit(1);
    }
    
    if (fclose(dest_fp) != 0) {
        perror("Error closing destination file");
        exit(1);
    }
}