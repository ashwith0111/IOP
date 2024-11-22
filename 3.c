#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Write your salary ");
    scanf("%d",&a);
    printf("Write your vaccation charges: ");
    scanf("%d",&b);
    printf("Write your hospital charges: ");
    scanf("%d",&c);
    printf("Write your EMI charges: ");
    scanf("%d",&d);
    printf("Write your electricity charges: ");
    scanf("%d",&e);
    printf("Write your recharge and food charges: ");
    scanf("%d",&f);
    printf("your gross salary is %d",a-b-c-d-e-f);
}