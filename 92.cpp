#include<stdio.h>
int main(){
	int n,max=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *p=a;
	for(int i=0;i<n;i++){
		if(*p>max){
			max = *p;
			p++;
		}
	}
	printf("the max number is %d",max);
}
