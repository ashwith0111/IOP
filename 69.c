#include <stdio.h> 
int main() 
{ 
	int n,num,b=0;
    printf("Give the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int k=0;k<n;k++){
        printf("Give a number for array: ");
        scanf("%d",&a[k]);
    }
    printf("Give the number for search: ");
    scanf("%d",&num);
    for(int i=0;i<=n-1;i++){
        if(a[i]==num){
            b=1;
            break;
        }
    }
    if(b==1){
        printf("that number is in the array");
    }
    else{
        printf("There is no such kind of number in the give array");
    }
    
}