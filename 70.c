#include<stdio.h>
int main(){
    int n,num,b=0;
    printf("Give the size of array: ");
    scanf("%d",&n);
    int a[n],p=0;
    for(int k=0;k<n;k++){
        printf("Give a number in array: ");
        scanf("%d",&a[k]);
    }
    printf("Give the number for search: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(a[i]==num){
            p++;
        }
    }
    printf("the number of occurence in the array is %d",p);
}