#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter variable number 1: ");
    scanf("%d",&a);
    printf("enter variable number 2: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d \n",a);
    printf("%d",b);

}