#include<stdio.h>
int main(){
    int n,res,i,t;
    res=0;
    scanf("%d",&n);
    i=n*n;
    while(i!=0){
        t=i%10;
        res=res+t;
        i=i/10;
    }
    if(res==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}