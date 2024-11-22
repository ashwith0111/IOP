#include<stdio.h>
int main(){
    float sales;
    printf("Give the amount obtained from sales: ");
    scanf("%f",&sales);
    if(sales<=500){
        sales = sales + sales/20;
    }
    else if(sales>500 && sales<=2000){
        sales = sales + sales/10 + 35;
    }
    else if(sales>2000 && sales<=5000){
        sales = sales + sales*0.12 + 185;
    }
    
    else{
        sales = sales + sales*0.125;
    }
    printf("%f",sales);
}