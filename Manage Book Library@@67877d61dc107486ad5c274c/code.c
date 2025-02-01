#include <stdio.h>

struct books{
    char title[69];
    char author[69];
    float price;
};
int main() {
    int n;
    scanf("%d",&n);
    struct books b1[n];
    for(int i=0; i<n; i++){
        scanf("%s %s %f",b1[i].title,b1[i].author,&b1[i].price);
    }
    float thold;
    scanf("%f",&thold);
    printf("Books above price %.2f:\n",thold);
    for(int i=0; i<n; i++){
        if(b1[i].price>thold){
            printf("Title: %s, Author: %s, Price: %.2f\n",b1[i].title,b1[i].author,b1[i].price);
        }
    }
    return 0;
}