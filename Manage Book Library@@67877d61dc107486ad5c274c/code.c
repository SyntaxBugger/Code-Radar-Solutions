#include <stdio.h>

struct books{
    char title;
    char author;
    float price;
};
int main() {
    int n
    scanf("%d".&n);
    struct books b1[n];
    for(int i=0; i<n; i++){
        scanf("%s %s %f",b1[i].title,b1[i].author,&b1[i].price);
    }
    float thold;
    scanf("%f",&thold);
    for(int i=0; i<n; i++){
        if(b1[i].price>thold){
            printf("Title: %s, Author: %s, Price: %.2f",title,author,price);
        }
    }
    return 0;
}