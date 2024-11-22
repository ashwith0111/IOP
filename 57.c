#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    int arr[n],large=-999999,s_large=-999999;
    for(int i=0;i<=n-1;i++){
        printf("Give a number: ");
        scanf("%d",&arr[i]);
        if(arr[i]>=large){
            large = arr[i];
        }
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=large){
            if(arr[i]>=s_large){
                s_large = arr[i];
            }
        }
    }
    printf("the largest number is %d\n",large);
    printf("the second largest number is %d",s_large);
}