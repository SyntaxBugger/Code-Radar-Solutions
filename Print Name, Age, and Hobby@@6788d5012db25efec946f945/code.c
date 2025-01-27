#include <stdio.h>

int main() {
    int age;
    char name[60];
    char hobby[60];
    scanf("%c%d",&name,&age);
    
    scanf("%c",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %s\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}