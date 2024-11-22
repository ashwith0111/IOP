#include<stdio.h>
int main(){
    float p;
    printf("Enter the number of degrees in farenheit: ");
    scanf("%f",&p);
    printf("the temperatur in centigrade is %f", (p-32)*5/9);
}