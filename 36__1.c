#include<stdio.h>
int main(){
    int o;
    printf("Give an odd number: ");
    scanf("%d",&o);
    if(o%2==0){
        printf("Give an odd number !!!!");
    }
    else{
        for(int i=1;i<=o;i=i+2){
            printf("%d \n",i);
        }
    }
}