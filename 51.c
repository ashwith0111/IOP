#include<stdio.h>
int main(){
    for(int i=10000;i>=1;i=i/10){
        printf("%.5d\n",i);
    }
}