#include<stdio.h>
int fi(int n);
int main(){
    int n;
    scanf("%d",&n);
    printf("the fibonacii number is %d",fi(n-1));
}
int fi(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fib1 = fi(n-1);
    int fib2 = fi(n-2);
    int fib = fib1 + fib2;
    return fib;
}