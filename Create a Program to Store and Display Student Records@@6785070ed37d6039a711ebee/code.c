#include <stdio.h>

struct student {
    int rno;
    char name[60];
    float mrks;
};

int main() {
    int n;
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %f",&s1[i].rno,s1[i].name,&s1[i].mrks);
    }
    for(int i=0; i<n; i++){
        printf("Roll Number: %d,",s1[i].rno);
        printf("Name: %s,",s1[i].name);
        printf("Marks: %.2f\n",s1[i].mrks);
    }
    return 0;
}