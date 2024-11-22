#include <stdio.h>
int sum(int n);
int main() {
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    printf("%d",sum_n(n));
}
int sum_n(int n){
    int digit=0,sum=0;
    int i = n;
    do{
        digit++;
        i/=10;
    }
    while(i!=0);
    int j =n;
    do{
        int mod = j%10;
        sum = sum + mod;
        j/=10;
        
    }
    while(j!=0);
    if(sum >= 10){
        sum_n(sum);
    }
    else{
        return sum;
    }
    
}