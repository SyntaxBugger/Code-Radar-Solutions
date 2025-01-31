#include <stdio.h>

struct student{
    int rno;
    char name[80];
    float marks;
};
int main() {
    int n;
    scanf("%d",&n);
    struct student s1;
    for(int i=0; i<n; i++){
        scanf("%d %s %f",&s1.rno,s1.name,&s1.marks);
    }
    for(int i=0; i<n; i++){
        printf("Roll Number: %d, ",s1.rno);
        printf("Name: %s, ",s1.name);
        printf("Marks: %.2f/n",s1.marks);
    }
    return 0;
}