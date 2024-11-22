#include<stdio.h>
int main(){
	int n,pos;
	scanf("%d %d",&n,&pos);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(i>=pos){
			b[i] = a[i-pos];
		}
		else{
			b[i] = a[n-pos+i];
		}
}
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
