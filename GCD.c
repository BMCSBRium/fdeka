#include <stdio.h>
int GCD(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return GCD(y,x%y);
    }
}
int main(){
    int a,b; 
    scanf("%d%d",&a,&b);
    printf("%d",GCD(a,b));
}