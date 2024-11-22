#include <stdio.h>
#include<math.h>
int fib(int x);
int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",fib(i));
    }
}
int fib(int x){
    if(x==1){
        return 0;
    }
    if(x==2){
        return 1;
    }
    int xm1 = fib(x-1);
    int xm2 = fib(x-2);
    int fibo = xm1 + xm2;
    return fibo;
    }