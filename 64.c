#include<stdio.h>
#include<math.h>
int main(){
    int mat[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("give a number for %d,%d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<=2;i++){
        int sum=0;
        for(int j=0;j<=2;j++){
            sum = sum + mat[i][j];
        }
        printf("the %d row sum is %d\n",i+1,sum);
    }
}