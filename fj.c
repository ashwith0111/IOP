
#include<stdio.h>
int main(){
        int j,o,a=0;
        scanf("%d %d",&j,&o);
        int can[j]={0};
        for(int i=0;i<o;i++){
                int u,l,v;
                scanf("%d %d %d",&l,&u,&v);
                for(int k=l-1;k<u;k++){
                        can[k]+=v;
                }
        }
        for(int i=0;i<j;i++){
                printf("%d\n",can[i]);
        }
}