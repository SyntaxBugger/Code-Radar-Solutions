#include <stdio.h>
#include <string.h>

void removeNewline(char *str) {
    str[strcspn(str, "\n")] = '\0'; // Replace newline with null terminator
}

int main() {
    char a[100], b[20];

    // Read input strings
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // Remove trailing newlines
    removeNewline(a);
    removeNewline(b);

    // Concatenate and print
    strcat(a, b);
    printf("%s\n", a);
    
    return 0;
}
