#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int temp =n;
    int y;
    int r=0;
    while(n>0){
        y=n%10;
        r=r*10+y;
        n=n/10;

    }
    if(temp==r){
        printf("%d is a palindrome number",temp);
    }
    else{
        printf("not a palindrome number");
    }
}