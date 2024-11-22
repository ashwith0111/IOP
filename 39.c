#include<stdio.h>
float fac(int n);
int main(){
    int n;
    float sum=0;
    printf("give a number: ");
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        sum = sum + j/fac(j);
    }
    printf("%f",sum);
}
float fac(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}