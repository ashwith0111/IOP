#include <stdio.h>
#include<math.h>
void swap(int x, int y);
int main(){
    int x,y;
    printf("Give the numbers: ");
    scanf("%d %d",&x,&y);
    swap(x,y);
}
void swap(int x,int y){
    int k = x;
    x  = y;
    y = k;
    printf("the x value is %d\n",x);
    printf("the y value is %d\n",y);
}