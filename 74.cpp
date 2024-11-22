#include<stdio.h>
int main(){
	int n,n1;
	scanf("%d %d",&n,&n1);
	int a[n],b[n1],c[n+n1];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n1;i++){
		scanf("%d",&b[i]);
		}
	for(int i=0;i<n+n1;i++){
		if(i<n){
			c[i]=a[i];
		}
		if(i>=n){
			c[i]=b[i-n];
		}
	}
	for(int i=0;i<n+n1-1;i++){
		for(int j=0;j<n+n1-1;j++){
			if(c[j]>c[j+1]){
				int t = c[j];
				c[j] = c[j+1];
				c[j+1] = t;
				
			}
	 }
	}
	for(int i=0;i<n+n1;i++){
		printf("%d ",c[i]);
	}
	
}
