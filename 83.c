#include <stdio.h>
#include<math.h>
int a(int arr[],int n);
int main(){
    int n;
    printf("Give the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",a(arr,n));
}
int a(int arr[],int n){
    int large = arr[0];
    for(int i=0;i<=n-1;i++){
        if(large<arr[i]){
            large = arr[i];
        }
    }
    return large;
}