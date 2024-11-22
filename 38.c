#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i=1;
    do
    {
        a = i*i;
        i++;
        if(a>n){
            break;
        }
        printf("%d \n",a);
    } while (a<n);
    
}