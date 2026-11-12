#include<stdio.h>
void main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'){
        switch(ch){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            printf("%c is a vowel",ch);
            break;
            default:
            printf("%c is a consonant",ch);
        }
    }
}