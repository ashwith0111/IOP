#include<stdio.h>
int main(){
	int f,s,t;
	printf("Enter your first number: ");
	scanf("%d",&f);
	printf("Enter your second number: ");
	scanf("%d",&s);
	printf("Enter your third number: ");
	scanf("%d",&t);
	if(f>s){
		if(f>t){
			printf("first number is greatest");
		}
		else if(f<t){
			printf("third number is greatest");
		}
		else{
			printf("first and third number are equal");
		}
	}
	else if(s>f){
		if(s>t){
			printf("second number is greatest");
		}
		else if(t>s){
			printf("third number is greatest");
		}
		else{
			printf("second and third number are equal");
		}
	}
	else if(s==f){
		if(f>t){
			printf("first and second numbers are equal");
		}
		else if(f<t){
			printf("third number is greatest");
		}
		else{
			printf("all numbers are same");
		}
		
	}
}
