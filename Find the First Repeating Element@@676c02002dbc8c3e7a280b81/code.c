#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0; i<n; i++){
        int values;
        scanf("%d",&values);
        nums[i]=values;
    }
    for(int i=0; i<n; i++){
        int a=nums[i];
        int cnt=0;
        for(int j=0; j<n; j++){
            if(a==nums[j]){
                cnt++;
            }
        }
        if(cnt>1){
            printf("%d",a);
            break;
        }else{
            printf("-1\n");
            break;
        }
    }
    return 0;
}