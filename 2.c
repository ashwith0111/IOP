#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter your marks for subject 1: ");
    scanf("%d",&a);
    printf("Enter your marks for subject 2: ");
    scanf("%d",&b);
    printf("Enter your marks for subject 3: ");
    scanf("%d",&c);
    printf("Enter your marks for subject 4: ");
    scanf("%d",&d);
    printf("Enter your marks for subject 5: ");
    scanf("%d",&e);
    printf("%d",(a+b+c+d+e)/5);
}