#include<stdio.h>
int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        if(n%i==0){
            printf("%d,",i);
        }
    }
     printf("Are the factors of the number %d",n);
}