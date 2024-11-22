#include<stdio.h>
typedef struct employee{
	int pay,emp_num;
	char emp_name[100];
}emp;
int main(){
	emp emps[50];
	int n;
	scanf("%d",&n);
	emp *p=emps;
	for(int i=0;i<n;i++){
		scanf("%d %d",&p[i].emp_num,&p[i].pay);
		scanf("%s",p[i].emp_name);
	}
	for(int i=0;i<n;i++){
		printf("the emp name is %s\n",p[i].emp_name);
		printf("the emp number is %d\nthe salary of the emp is %d\n",p[i].emp_num,p[i].pay);
		
	}
	
}
