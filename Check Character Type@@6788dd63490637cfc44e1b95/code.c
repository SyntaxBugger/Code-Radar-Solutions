#include <stdio.h>
#include <ctype.h> 

int main() {
    char c;
    scanf("%c", &c);
    c = tolower(c);

    if (isalpha(c)) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("The character is a vowel.\n");
        } else {
            printf("The character is a consonant.\n");
        }
    } else if (isdigit(c)) {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}
