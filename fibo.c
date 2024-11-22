#include<stdio.h>
int fib(int n);
int main(){
        int c;
        scanf("%d",&c);
        int n[c],a=0;
        scanf("%d",&n);
        for(int j=0;j<c;j++){
        for(int i=1;fib(i)<=n;i++){
                if(fib(i)==n){
                        a=1;
                        break;
                }
        }
        if(a==1){
                printf("The number is in fibonacii series");
        }
        else printf("The number is not in fibo series");
        a=0;
}

int fib(int n){
        if(n==1){
                return 0;
        }
        if(n==2){
                return 1;
        }
        else{
                int f1 = fib(n-1);
                int f2 = fib(n-2);
                int f = fib(n-1)+fib(n-2);
                return f;
        }
}