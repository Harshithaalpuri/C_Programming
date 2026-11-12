#include<stdio.h>
void main(){
    int n;
    int r;
    
    int sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        r=n%10;
        int fact=1;
        for(int i=1;i<=r;i++){
            fact = fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }   
    if(sum==temp){
        printf("%d is a strong number",temp);
    }
    else{
        printf("not strong");
    }

}