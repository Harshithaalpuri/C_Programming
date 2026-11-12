#include<stdio.h>
void main(){
    int a =0;
    int b=1;
    int c ;
    int n;
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=1;i<=n;i++){
        c =a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
    
}