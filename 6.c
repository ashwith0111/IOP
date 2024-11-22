#include<stdio.h>
int main(){
    int a,b;
    printf("enter variable number 1: ");
    scanf("%d",&a);
    printf("enter variable number 2: ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d \n",a);
    printf("%d",b);
    return 0;
}