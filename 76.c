#include<stdio.h>
#include<math.h>
void num(int n);
int main(){
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    num(n);
}
void num(int n){
    if(n%2==1){
        printf("it's an odd number");
    }
    else{
        printf("it's an even number");
    }
}