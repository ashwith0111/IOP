#include<stdio.h>
int main(){
    int n,a=0;
    printf("Give a number: ");
    scanf("%d",&n);
    for(int i=n-1;i>=2;i--){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==1){
        printf("it's a composite number");
    }
    else if(n==1){
        printf("it is neither a prime number nor a composite number");
    }
    else{
        printf("it's a prime number");
    }
}