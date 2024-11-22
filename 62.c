#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    int arr[n],s[n];
    for(int i=0;i<=n-1;i++){
        printf("Give a number for array: ");
        scanf("%d",&arr[i]);
        s[i]=arr[i];
    }
    printf("before reversing\n");
    for(int i=0;i<=n-1;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<=n-1;i++){
        arr[i]=s[n-i-1];
    }
    printf("after rversing\n");
    for(int i=0;i<=n-1;i++){
        printf("%d\t",arr[i]);
    }
}