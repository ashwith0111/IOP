#include<stdio.h>
int main(){
	char n;
	printf("give the character: ");
	scanf("%c",&n);
	 if(n>=97 && n<=122){
        printf("%c is a small letter",n);
    }
    else if(n>=65 && n<=90){
        printf("%c is a capital number",n);
    }
    else{
    	printf("only give an alphabet");
	}
}
