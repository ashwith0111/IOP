#include<stdio.h>
int main(){
    int n,g,f = 1;
    printf("Give a number for base:");
    scanf("%d",&n);
    printf("Give a number for power: ");
    scanf("%d",&g);
    int i,j;
    for(i=g ;i>=1;i--){
        f = f * n;
    }
    printf("%d",f);
}