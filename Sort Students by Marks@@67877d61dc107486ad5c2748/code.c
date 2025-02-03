#include <stdio.h>

struct grades{
    int rno;
    char name[69];
    float marks;
};
int main() {
    int n;
    scanf("%d",&n);
    struct grades g1[n];
    for(int i=0; i<n; i++){
        scanf("%d %s &f",&g1[i].rno,g1[i].name,&g1[i].marks);
    }
    for()
    return 0;
}