#include<stdio.h>
int main(){
    int j=1;
    printf("    1\n");
    for(int i=1;i<=3;i++){
        for(int k=4-i;k>=1;k--){
            printf(" ");
        }
        for(j;j<=i;j++){
            printf("%d",j);
        }
        for(int k=j;k>=1;k--){
            printf("%d",k);
        }
        j=1;
        printf("\n");
    }
}