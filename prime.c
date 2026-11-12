#include<stdio.h>
void main(){
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
          count++;
        }
    }
    if(count==2){
        printf("%d is a prime number",n);
    }
}
