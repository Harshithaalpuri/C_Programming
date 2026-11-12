#include<stdio.h>
void main(){
    int n;
    
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count =0;
        for(int j=1;j<=n;j++){
            if(i%j==0){
                count++;

            }
        }
        if(count==2){
            printf("%d is a prime number",i);
        }
    }
    
}