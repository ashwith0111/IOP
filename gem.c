
#include<stdio.h> 
int gem(int j,int n,char a[][100]); 
int main(){ 
        int n,s=0; 
        scanf("%d",&n); 
        char a[n][100]; 
        for(int i=0;i<n;i++){ 
                scanf("%s",a[i]); 
        } 
        for(int i=97;i<123;i++){ 
                s+=gem(i,n,a); 

                } 
        printf("%d",s);         
} 
int gem(int j,int n,char a[][100]){ 
        int s=0; 
        for(int k=0;k<n;k++){ 
                for(int i=0;a[k][i]!='\0';i++){ 
                if(a[k][i]==j){ 
                        s++; 
                        break; 
                } 
        } 
        } 
        if(s==n){ 
                return 1; 
        } 
        else{ 
                return 0; 
        } 

}