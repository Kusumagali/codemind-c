#include<stdio.h>
int main(){
    int n,r,s;
    s=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        if(s<=r){
            s=r;
        }
        n=n/10;
    }
    printf("%d",s);
    return 0;
}