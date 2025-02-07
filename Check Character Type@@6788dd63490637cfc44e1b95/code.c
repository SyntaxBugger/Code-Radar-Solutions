#include <stdio.h>
#include <ctype.h> 

int main() {
    char c;
    scanf("%c", &c);
    c = tolower(c);

    if (isalpha(c)) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else if (isdigit(c)) {
        printf("Digit");
    } else {
        printf("Special Character");
    }

    return 0;
}
