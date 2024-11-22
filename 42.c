#include<stdio.h>
int main(){
    int n,a=0;
    printf("Give a number: ");
    scanf("%d",&n);
    for(int i=n-1;i>1;i--){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(a==1){
        printf("Given number is a composite number");
    }
    else{
         printf("Given number is a prime number");
    }
}