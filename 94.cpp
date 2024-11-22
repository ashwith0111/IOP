#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	scanf("%[^\n]s",a);
	int n = strlen(a);
	char *p=a;
	for(int i=n-1;i>=0;i--){
		b[i] = p[n-i-1];
	}
	puts(b);
}
