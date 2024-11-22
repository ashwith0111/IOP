#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	printf("Enter the third number");
	scanf("%d",&c);
	(a>b && a>c) ? printf("first number is greatest number") 
	: (b>c) ? printf("second is the greatest number") 
	: printf("third number is the greatest number");
}
