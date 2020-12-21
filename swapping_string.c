#include<stdio.h>
int main()
{
    char a='J';
    char b='U';
    char c;

    c=a;
    a=b;
    b=c;
    printf("%c",a);
    printf("%c",b);
}