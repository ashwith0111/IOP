#include<stdio.h>
int main(){
    int o;
    do
    {
        printf("Give an odd number: ");
        scanf("%d",&o);
    } while (o%2==0);

    for(int i=1;i<=o;i+=2){
        printf("%d \n",i);
    }
    
}