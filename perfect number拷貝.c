#include <stdio.h>
int main(){
    int i,j,n;
    for(i=2;i<=10000;i++){
        n=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                n+=j;
            }
        }
        if(n==i){
            printf("%d\n",i);
        }
    }
}
