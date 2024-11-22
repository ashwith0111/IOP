#include<stdio.h>
typedef struct students{
	int marks,roll;
	char name[100];
}s;
int main(){
	int n;
	scanf("%d",&n);
	s st[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&st[i].marks,&st[i].roll);
		scanf("%s",st[i].name);
	}
	for(int i=0;i<n;i++){
		if(st[i].marks>500){
			printf("the marks are %d\nand the roll number is %d\n",st[i].marks,st[i].roll);
		    printf("the name of the student is %s",st[i].name);
		}
	}
}
