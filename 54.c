#include<stdio.h>
#include<math.h>
int main(){
    int sum = 0,arr[10];
    for(int i=0;i<=9;i++){
        printf("Enter a number ");
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d",sum);
}