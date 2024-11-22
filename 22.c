#include<stdio.h>
int main(){
	int f=1,n;
	printf("give a number: ");
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		f = f*i;
    }
    printf("the factorial is %d",f);
}
