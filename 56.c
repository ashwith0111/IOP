#include <stdio.h>
#include<math.h>
int main(){
    int p=0,n=0,z=0,arr[10];
    for(int i=0;i<=9;i++){
        printf("Enter a number ");
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            n--;
        }
        else{
            z++;
        }
    }
    printf("the number of positive numbers are %d\n",p);
    printf("the number of negative numbers are %d\n",n);
    printf("the number of 0's  are %d",z);
}