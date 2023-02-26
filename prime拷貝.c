#include <stdio.h>
void isprime(int x){
    int i,cnt=0;
    for(i=2;i<x;i++){
        if(x%i==0){
            cnt++;
        }
    }
    if(cnt==0){
        printf("%d\n",x);
    }
}
int main(){
    int j; 
    for(j=2;j<=1000;j++){
        isprime(j);
    }
}