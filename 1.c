#include<stdio.h>
int main(){
    int p,t,r=8;
    printf("How much amount do you want: ");
    scanf("%d",&p);
    printf("How much time do you want: ");
    scanf("%d",&t);
    printf("Rate of intrest is 8 \n");
    printf("%d",p*t*r/100);
}