#include<stdio.h>
void main(){
    int a=15;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    ***r=89;
    printf("value of a is %d\n %d\n %d\n",***r,**q,*p);
    return 0;
}