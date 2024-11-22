#include <stdio.h>
#include<math.h>
int p(int n);
int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    printf("%d",p(n));
    }
int p(int n){
    int j=1;
    for(int i=n-1;i>1;i--){
        if(n%i==0){
            j=0;
        }
    }
    return j;
}