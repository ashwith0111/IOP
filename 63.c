#include<stdio.h>
#include<math.h>
int main(){
    int mat[3][3],large=-99999,min=999999;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("give a number for %d %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
            if(mat[i][j]>large){
                large = mat[i][j];
            }
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            if(mat[i][j]<min){
                min = mat[i][j];
            }
        }
    }
    printf("the max number is %d",large);
     printf("the min number is %d",min);
}