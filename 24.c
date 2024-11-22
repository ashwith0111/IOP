#include<stdio.h>
#include<math.h>
int main(){
    float x,y,n;
    printf("give a value for x: ");
    scanf("%f",&x);
    printf("give a value for n: ");
    scanf("%f",&n);
    if(n==1){
        y = 1 + x;
        printf("%f",y);
    }
    else if(n==2){
       y =  1 + x/2;
       printf("%f",y);
    }
    else if(n==3){
        y = 1 + pow(x,3);
        printf("%f",y);
    }
    else if(n>3 && n<1){
       y = 1 + n*x;
       printf("%f",y);
    }
}