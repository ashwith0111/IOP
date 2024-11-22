#include <stdio.h>
#include<math.h>
int main(){
    int a[10],b[10],s[10];
    for(int i=0;i<=9;i++){
        printf("Give a number for array 1: ");
        scanf("%d",&a[i]);
        printf("Give a number for array 2: ");
        scanf("%d",&b[i]);
        s[i] = a[i] + b[i];
    }
}