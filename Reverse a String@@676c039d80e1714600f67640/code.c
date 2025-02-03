#include <stdio.h>
#include <string.h>

int main() {
    char name[69];
    fgets(name,sizeof(name),stdin)
    printf("%s",strrev(name));
    return 0;
}