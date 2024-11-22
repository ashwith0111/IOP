#include<stdio.h>
#include<math.h>
void arm(int n);
int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    arm(n);
}
void arm(int n){
    int i = n,digit=0,sum=0;
    do{
        digit++;
        i/=10;
    }
    while(i!=0);
    int j =n;
    do{
        sum = sum + pow(j%10,digit);
        j/=10;
    }
    while(j!=0);
    if(sum == n){
        printf("it's an armstrong number");
    }
    else{
        printf("it's not a armstrong number");
    }
}