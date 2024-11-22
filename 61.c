#include <stdio.h> 
int main() 
{ 
	int n;
    printf("Give the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int k=0;k<n;k++){
        printf("Give a number for array: ");
        scanf("%d",&a[k]);
    }
	int  i, j, t = 0; 
	for (i = 0; i < n; i++) { 
		for (j = i + 1; j < n; j++) { 
			if (a[i] > a[j]) { 
				t = a[i]; 
				a[i] = a[j]; 
				a[j] = t;
                printf("%d \t", a[i]);
                printf("%d\n",a[i]);
			} 
		} 
	} 
	
}
