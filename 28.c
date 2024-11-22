#include <stdio.h>
#include<math.h>
int main() {
    int n,digit=0,sum=0;
    scanf("%d",&n);
    int i = n;
    do{
        digit++;
        i/=10;
    }
    while(i!=0);
    int j =n;
    do{
        sum = sum + pow(j%10,digit);
        j/=10;
    }
    while(j!=0);
    if(sum == n){
        printf("it's an armstrong number");
    }
    else{
        printf("it's not a armstrong number");
    }
    return 0;
}