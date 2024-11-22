#include <stdio.h>
#include<math.h>
int main() {
    int n,digit=0,sum=0;
    scanf("%d",&n);
    int num[n];
    int large = -9999999;
    int s_large = -9999999;
    int i = n;
    do{
        scanf("%d",&num[i]);
        i--;
    }
    while(i>=1);
    for(int j=0;j<=n-1;j++){
        if(num[j]>=large){
            large = num[j];
        }
        }
    for(int k=0;k<=n-1;k++){
        if(num[k] != large){
            if(num[k]>=s_large){
                s_large = num[k];
            }
        }
    }
    printf("the max number is %d\n",large);
    printf("the second max number is %d",s_large);
    return 0;
}