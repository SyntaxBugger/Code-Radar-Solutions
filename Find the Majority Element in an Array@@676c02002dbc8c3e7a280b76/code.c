#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nums[]= new int[n];
    for(int i=0; i<n; i++){
        int values;
        scanf("%d",&values);
        nums[i]==values;
    }
    for(int i=0; i<n; i++){
        a=nums[i];
        int cnt=0;
        for(int j=0; j<n; j++){
            if(nums[j]==a){
                cnt++;
            }
        }
        if(cnt==n/2){
            printf("%d",&a);
        }
    }
}