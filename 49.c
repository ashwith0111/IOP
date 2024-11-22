#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        printf("\n");
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
    }
}