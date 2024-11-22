#include<stdio.h>
int main(){
	int marks[3][3],sum[3],sub[3][3];
	for(int i=0;i<=2;i++){
	    sum[i]=0;
		for(int j=0;j<=2;j++){
		    printf("Give a roll number: ");
		    scanf("%d",&sub[][j]);
			printf("Give the marks for subject %d for student ",j+1,i+1);
			scanf("%d",&marks[j][i]);
			sum[i] += marks[j][i];
		}
	}
	for(int i=0;i<=2;i++){
		int max = 0;
		for(int j=0;j<=2;j++){
			if(marks[j][i] >= max){
				sub[j][i] = marks[j][i];
			}
		}
		
	}
	int max =0;
	for(int i=0;i<=2;i++){
			if(sum[i] >= max){
				max = sum[i];
			}
		}
	
	for(int i=0;i<=2;i++){
		printf("%d for student %d \n",sum[i],i+1);
	}
	for(int i=0;i<=2;i++){
		printf("%d max marks for the sbject %d \n",sub[i],i+1);
	}
	printf("the total max marks are %d",max);
	}
	
