#include<stdio.h>
int main(){
    int e = 0,o = 0,n;
    printf("Give a number: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i=i+2){
        e = e + i;
    }
    for(int j=1; j<=n; j=j+2){
        o = o + j;
    }
    printf("%d \n",e);
    printf("%d",o);
}