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
        scanf("%d %s %f",&g1[i].rno, g1[i].name, &g1[i].grades);
    }
    for(int i=0; i<n; i++){
        if(g1[i].marks>=85){
            printf("Roll Number: %d, Name: %s, Grade: %c\n",g1[i].rno,g1[i].name,'A');
        }else if(g1[i].marks<85 && g1[i].marks>=70){
            printf("Roll Number: %d, Name: %s, Grade: %c\n",g1[i].rno,g1[i].name,'B');
        }else{
            printf("Roll Number: %d, Name: %s, Grade: %c\n",g1[i].rno,g1[i].name,'C');
        }
    }
    return 0;
}