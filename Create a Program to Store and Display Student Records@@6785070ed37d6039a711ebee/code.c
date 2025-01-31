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
    for(int i=1; i<=n; i++){
        scanf("%d",&s1[i].rno);
        scanf("%s",s1[i].name);
        scanf("%f",&s1[i].mrks);
    }
    for(int j=1; j<=n; j++){
        printf("Roll Number: %d,",s1[j].rno);
        printf("Name: %s,",s1[j].name);
        printf("Marks: %.2f",s1[j].mrks);
    }
    return 0;
}