#include<stdio.h>
int main(){
    int t,da,h,m,s;
    printf("Enter the time in seconds: ");
    scanf("%d",&t);
    da = t/86400;
    h = (t%86400)/3600;
    m = ((t%86400)%3600)/60;
    s = ((t%86400)%3600)%60;
    printf("Number of days is %d \n",da);
    printf("Number of hours is %d \n",h);
    printf("Number of minutes is %d \n",m);
    printf("Number of seconds is %d",s);
    
}