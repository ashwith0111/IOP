#include<stdio.h>
void vowel(char c);
int main(){
	char c;
	printf("Give a character: ");
	scanf("%c",&c);
	vowel(c);
}
void vowel(char c){
	if(c==65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117){
		printf("Give character is vowel");
	}
	else{
		printf("Given character is not a vowel");
	}
}
