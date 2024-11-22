#include<stdio.h>
int main(){
	char a[100];
	scanf("%[^\n]s",a);
	char *p=a;
	int s=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			s++;
		}
	}
	printf("The number of words in the string is %d",s+1);
}
