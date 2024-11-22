#include<stdio.h>
#include<math.h>
void pal(int n);
int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    pal(n);
}
void pal(int n){
    int i = n,sum=0,digit=0;
    do{
        digit++;
        i/=10;
    }
    while(i!=0);
    int j =n;
    do{
        for(int k=digit;k>=1;k--){
            int mod = j%10;
            sum = sum + mod*(pow(10,k-1));
            j/=10;
        }
    }
    while(j!=0);
    if(sum == n){
        printf("it's a palindrom number");
    }
    else{
        printf("it's not a palindrom number");
    }
}