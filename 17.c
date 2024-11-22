#include<stdio.h>
int main(){
    int f,s,t;
    printf("Enter your first number: ");
    scanf("%d",&f);
    printf("Enter your second number: ");
    scanf("%d",&s);
    printf("Enter your third number: ");
    scanf("%d",&t);
    if(f>s && f>t){
        printf("First number is greatest");
    }
    if(s>t && s>f){
        printf("Second number is greatest");
    }
    if(t>s && t>f){
        printf("Third number is greatest");
    }
    else{
        printf("don't give same numbers for two or three variables");
    }
}