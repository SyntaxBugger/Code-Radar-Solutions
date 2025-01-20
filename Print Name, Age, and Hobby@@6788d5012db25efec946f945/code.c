#include <stdio.h>

int main() {
    int age;
    char name[60];
    char hobby[60];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);
    printf("Name: %s",name);
    printf("Age: %s",age);
    printf("Hobby: %s",hobby);
    return 0;
}