#include <stdio.h>
#include<math.h>
int main() {
    int n,digit=0,sum=0;
    printf("Give a number");
    scanf("%d",&n);
    int i = n;
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
    printf("the reverse number is %d",sum);
    return 0;
}