#include<stdio.h>
void length(char a[]);
int main(){
	char a[100];
	scanf("%[^\n]s",a);
	length(a);
}
void length(char a[]){
	int i=0;
	for(i;a[i]!='\0';i++){
		
	}
	printf("the number of characters is %d",i);
}
