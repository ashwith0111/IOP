#include<stdio.h>
int main(){
    int e;
    do
    {
        printf("Give an even number: ");
        scanf("%d",&e);
    } while (e%2==1);

    for(int i=2;i<=e;i+=2){
        printf("%d \n",i);
    }
    
}