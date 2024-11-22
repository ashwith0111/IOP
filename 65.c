#include <stdio.h>
#include<math.h>
int main(){
     int mat[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("give a number for %d,%d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("the transpose of the matrix is");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            if(i==j){
                printf("%d\t",mat[i][j]);
            }
            else{
                int i_ = i; int j_ = j;int k;
                k = i_;i_=j_;j_=k;
                printf("%d\t",mat[i_][j_]);
            }
        }
        printf("\n");
    }
}