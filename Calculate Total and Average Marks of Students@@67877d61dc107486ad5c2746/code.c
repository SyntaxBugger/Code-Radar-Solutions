#include <stdio.h>

struct student{
    int rno;
    char name[60];
    float marks;
};
int main() {
    int n;
    int sum=0;
    scanf("%d",&n);
    struct student s1;
    for(int i=0; i<n; i++){
        scanf("%d %s %f",&s1[i].rno,s1[i].name,&s1[i].marks);
        sum+=s1[i].marks;
    }
    printf("Total Marks: %.2f\n",sum);
    printf("Average Marks: %.2",sum/n);
    return 0;
}