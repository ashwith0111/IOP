#include<stdio.h>
int main(){
	float a,b;
	char n;
	printf("What kind of operation do you want to do");
	scanf("%c",&n);
	printf("Enter the first number: ");
	scanf("%f",&a);
	printf("Enter the second number: ");
	scanf("%f",&b);
	switch (n){
		case '+' : printf("the answer is %f",a+b);
		         break;
	    case '-' : printf("the answer is %f",a-b);
		         break;
     	case '*' : printf("the answer is %f",a*b);
                break;
	    case '/' : printf("the answer is %f",a/b);
		        break;
		default : printf("not a valid operation");
	}
}
