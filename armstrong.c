#include<stdio.h>
void main(){
    int n;
    int r=0;
    int sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp){
        printf("%d is a armstrong number",temp);
    }
}