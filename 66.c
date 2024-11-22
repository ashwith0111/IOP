#include<stdio.h>
#include<math.h>
int main(){
    int a[3][3],b[3][3],s[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("give a number for matrix one  (%d,%d): ",i+1,j+1);
            scanf("%d",&a[i][j]);
            printf("give a number for matrix two  (%d,%d): ",i+1,j+1);
            scanf("%d",&b[i][j]);
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d\t",s[i][j]);
        }
         printf("\n");   
    }
}