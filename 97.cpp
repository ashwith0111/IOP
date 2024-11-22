#include<stdio.h>
int main(){
	char a[100];
	scanf(" %[^\n]s",a);
	char *p=a;
	int s=0;
	for(int j=0;*p!='\0';j++)
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
		{
			s += 1;
		}
		p++;
	}
	printf("The number of vowels in the string is %d",s);
}
