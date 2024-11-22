#include<stdio.h>
int main(){
        for(int i=1;i<=4;i++){
            for(int k=1;k<=4-i;k++){
                printf(" ");
            }
            for(int j=1;j<=2*i-1;j++){
                printf(" *");
            }
            printf("\n");
        }
        for(int k=5;k>=1;k-=2){
            for(int l=5;l>=k;l--){
                printf(" ");
            }
            for(int p=1;p<=k;p++){
                printf(" *");
            }
            printf("\n");
        }
}
