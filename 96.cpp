#include<stdio.h>
#include<string.h>
int main(){
	printf("Give the number of strings: ");
	int n;
	scanf("%d",&n);
	char a[n][100];
	char *p[n];
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n;i++){
			p[i] = &a[i];
		
	}
	int len[n];
	for(int i=0;i<n;i++){
		len[i] = strlen(a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(len[j]>len[j+1]){
				char t[100];
				strcpy(t,p[j]);
				strcpy(p[j+1],p[j]);
				strcpy(p[j+1],t);
			}
		}
	}
	for(int i=0;i<n;i++){
		puts(p[i]);
	}
}
