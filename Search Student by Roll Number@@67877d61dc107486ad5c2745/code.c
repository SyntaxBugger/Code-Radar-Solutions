#include <stdio.h>

struct student{
    int rno;
    char name[69];
    float marks;
};
int main() {
    int n;
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0;i<n; i++){
        scanf("%d %s %f",&s1[i].rno,s1[i].name,&s1[i].marks);
    }
    int search;
    scanf("%d",&search);
    int flag=0;
    for(int i=0; i<n; i++){
        if(s1[i].rno==search){
            printf("Roll Number: %d, ",s1[i].rno);
            printf("Name: %s, ",s1[i].name);
            printf("Marks: %.2f",s1[i].marks);
            flag=1;
        }
    }
    if(flag==0){
        printf("Student not found");
    }
    return 0;
}