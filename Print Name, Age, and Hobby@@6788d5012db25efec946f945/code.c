#include <stdio.h>

int main() {
    int age;
    char name[60];
    char hobby[60];
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%c",&hobby);
    printf("Name: %s \n",name);
    printf("Age: %s \n",age);
    printf("Hobby: %s",hobby);
    return 0;
}