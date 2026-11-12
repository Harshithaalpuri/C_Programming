#include<stdio.h>
int main(){
    int a=10;
    float b=7.8;
    int *p;
    float *q;
    p=&a;
    q=&b;
    printf("value of a = %d\n",a);
    printf("value of a = %d\n",*p);
    printf("value of a = %d\n",p);
    printf("value of a = %d\n",&a);

}