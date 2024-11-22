#include<stdio.h>
int main(){
    char g;
    printf("Enter your character: ");
    scanf("%c",&g);
    if(g>=97 && g<=122){
        printf("that is a small letter");
    }
    else if(g>=65 && g<=90){
        printf("that is the capital number");
    }
    else if((g>=32 && g<=47) || (g>=58 && g<=64) || (g>=91 && g<=96) || (g>=123 && g<=126)){
        printf("that is special key");
    }
    else if((g>=48 && g<=57) || (g>=12592)){
        printf("that is a number");
    }
    else{
        printf("other characters");
    }
}