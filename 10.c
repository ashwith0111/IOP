#include<stdio.h>
int main(){
    int m,p,c,e;
    printf("enter your marks in mathematics out of 200: ");
    scanf("%d",&m);
    printf("enter your marks in physics out of 200: ");
    scanf("%d",&p);
    printf("enter your marks in chemistry out of 200: ");
    scanf("%d",&c);
    printf("enter your marks in entrance exam out of 100: ");
    scanf("%d",&e);
    printf("The cutoff marks are for you is %d",m/2 + p/2 + c/2 + e);
}