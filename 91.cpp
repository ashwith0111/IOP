#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int *p=&n;
	int sq=*(p)*(*(p));
	int cu = sq*(*(p));
	printf("the square of the number is %d\n",sq);
	printf("the cube of the number is %d",cu);
}
