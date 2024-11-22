#include<stdio.h>
int main(){
    int n;
    printf("Enter your number");
    scanf("%d",&n);
    if(n%2 == 1){
        printf("given number is odd");
    }
    else{
        printf("given number is even");
    }
}