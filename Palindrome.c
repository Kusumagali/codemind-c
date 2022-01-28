#include<stdio.h>
int main(){
    int n,res,temp,i;
    res=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        i=n%10;
        res=res*10+i;
        n=n/10;
    }
    if(res==temp){
        printf("True");
    }
    else{
        printf("False");
    }
}