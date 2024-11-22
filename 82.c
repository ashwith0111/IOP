#include <stdio.h>
#include<math.h>
int p(int n);
int main(){
    int n,r;
    printf("Give a number for n: ");
    scanf("%d",&n);
    printf("Give a number for r: ");
    scanf("%d",&r);
    printf("%d",(p(n)/p(n-r))/p(r));
    }
int p(int n){
    int f=1;
    for(int i=n;i>=1;i--){
        f*=i;
    }
    return f;
}