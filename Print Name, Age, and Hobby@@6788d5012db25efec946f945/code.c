#include <stdio.h>

int main() {
    char[60] name;
    char[60] hobby;
    int age;
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("s",&hobby);
    printf("Name: %s",name);
    printf("Age: %s",age);
    printf("Hobby: %s",hobby);
    return 0;
}