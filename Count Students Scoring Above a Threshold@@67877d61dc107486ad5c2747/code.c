#include <stdio.h>

struct student{
    int rno;
    char name[78];
    float marks;
};
int main() {
    int n;
    scanf("%d",&n);
    int cnt=0;
    struct student s1[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %f",&s1[i].rno,s1[i].name,&s1[i].marks);
    }
    float thold;
    scanf("%f",&thold);
    for(int i=0; i<n; i++){
        if(s1[i].marks>thold){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}