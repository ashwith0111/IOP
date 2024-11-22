#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],*p;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		*(p+n-i-1) = a[i];
	}
	for(int i=0;i<n;i++){
	    printf("%d ",*(p+i));
	}
	
}
