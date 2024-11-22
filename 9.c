#include<stdio.h>
int main(){
    int da,h,m;
    printf("give the time in days: ");
    scanf("%d",&da);
    printf("give the time in hours: ");
    scanf("%d",&h);
    printf("give the time in minutes: ");
    scanf("%d",&m);
    printf("total time in seconds are %d",da*86400+h*3600+m*60);
}