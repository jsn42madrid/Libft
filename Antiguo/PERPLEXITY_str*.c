#include <unistd.h>  // Only allowed header

char *my_strchr(const char *str, int ch) {
    while (*str) {               // Loop until null terminator
        if (*str == (char)ch)    // Compare each character
            return (char *)str;  // Return pointer if found
        str++;                   // Move to next character
    }
    if (ch == '\0')              // Match null terminator if requested
        return (char *)str;
    return NULL;                 // Not found
}

// Simple test using write() from unistd.h
int main(void) {
    const char s[] = "system-level example";
    char c = 'e';
    char *found = my_strchr(s, c);

    if (found)
        write(1, found, 10);     // Write from found character onward (for demo)
    else
        write(1, "Not found\n", 10);

    return 0;
}
