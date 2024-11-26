#include<stdio.h>
#include <stdlib.h>
int main(){
	int *a[3],*b[3],*m[3];
	for(int i=0;i<3;i++){
		a[i] = (int*)calloc(3,sizeof(int));
		b[i] = (int*)calloc(3,sizeof(int));
		m[i] = (int*)calloc(3,sizeof(int));
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("1st matrix value for (%d,%d)",i+1,j+1);
			scanf("%d",&a[i][j]);
			printf("2nd matrix value for (%d,%d)",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				for(int k=0;k<3;k++){
					m[i][j] += a[i][k]*b[k][j];
				}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
		}
}
