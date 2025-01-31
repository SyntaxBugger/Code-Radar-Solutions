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
        scanf("%d %s %f",&s1[i].rno,s1[i].name,&s1[i].marks);
    }
    for(int i=0; i<n; i++){
        printf("Roll Number: %d, ",s1[i].rno);
        printf("Name: %s, ",s1[i].name);
        printf("Marks: %.2f\n",s1[i].marks);
    }
    return 0;
}