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
    for(int i=0; i<n; i++){
        scanf("%d %s %f",&s1[i].rno,s1[i].name,&s1[i].marks);
    }
    int flag=0;
    for(int i=0; i<n; i++){
        if(s1[i].marks>50.00){
            printf("All Passed");
            flag=1;
        }
    }
    if(flag==0){
        printf("Not All Passed");
    }
    return 0;
}