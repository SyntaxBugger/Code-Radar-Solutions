#include <stdio.h>

struct students{
    int rno;
    char name[70];
    float marks;
}
int main() {
    int n;
    float sum=0;
    scanf("%d",&n);
    struct students s[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %f",&s[i].rno,s[i].name,&s[i].marks);
        sum+=s[i].marks;
    }
    printf("Average Marks: %.2f",sum+/n);
    return 0;
}