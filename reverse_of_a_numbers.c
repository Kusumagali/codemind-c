#include<stdio.h>
int main(){
    int n,res,i;
    res=0;
    scanf("%d",&n);
    while(n!=0){
        i=n%10;
        res=res*10+i;
        n=n/10;
    }
    printf("%d",res);
}