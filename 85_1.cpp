#include<stdio.h>
typedef struct book{
	int year;
	char name[100],author[100];
}c;
void print(c c1);
int main(){
	c c1 = {200,"dragons","ashwith"};
	print(c1);
}
void print(c c1){
	c *p=&c1;
	printf("the year is %d\nthe author is %s\nthe book name is %s",p->year,p->author,p->name);
}
