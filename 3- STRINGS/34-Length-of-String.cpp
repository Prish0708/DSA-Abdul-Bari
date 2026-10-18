#include<stdio.h>
#include<stdlib.h>
#include<cstdio>

int main()
{
    char s[] = "welcome";
    int i ;

    for(i=0;s[i]!='\0';i++);
    printf("Length of string is : %d",i);

    return 0;
}
