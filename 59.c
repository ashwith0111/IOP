#include <stdio.h>
#include<math.h>
int main(){
    int a[10],b[10],t[10];
    for(int i=0;i<=9;i++){
        printf("Give a number for 1st array: ");
        scanf("%d",&a[i]);
        printf("Give a number for 2nd array: ");
        scanf("%d",&b[i]);
        t[i] = a[i];
        a[i] = b[i];
        b[i] = t[i];
    }
    for(int i=0;i<=9;i++){
        printf("%d\t",a[i]);
        printf("%d\t",b[i]);
    }
}