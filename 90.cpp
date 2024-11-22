#include<stdio.h>
int main(){
	char a[100];
	scanf(" %[^\n]s",a);
	char *p=a;
	int i=0,s=0;;
	for(i;*(p+i)!='\0';i++){
		if(*(p+i)==' '){
			continue;
		}
		s++;
	}
	printf("The number of characters excluding space is %d\n",s);
	printf("The number of characters including space is %d",i);
}
