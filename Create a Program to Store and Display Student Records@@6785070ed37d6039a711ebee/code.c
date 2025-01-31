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
        scanf("%d",%s1[i].rno);
        scanf("%s",s1[i].name);
        scanf("%f",%s1[i].mrks);
    }
    for(int i=1; i<=n; i++){
        printf("Roll Number: %d,",s1[i].rno);
        printf("Name: %s,",s1[i].name);
        printf("Marks: %.2f",s1[i].mrks);
    }
    return 0;
}