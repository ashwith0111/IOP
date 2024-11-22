#include <stdio.h>
#include<math.h>
int main(){
    int odd=0,arr[10],even=0;
    for(int i=0;i<=9;i++){
        printf("Enter a number ");
        scanf("%d",&arr[i]);
        if(arr[i]%2==1){
            odd++;
        }
        else{
            even++;
        }
    }
    printf("The number of odd numbers are %d\n",odd);
    printf("The number of even numbers are %d",even);
}