#include<stdio.h>
#include<stdlib.h>
#include<cstdio>

int main()
{
    char s[] = "welcome";
    int i , word=1;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' && s[i-1]!=' ')
        {
            word++;
        }
    }
    printf("Number of words in the string is : %d",word);

    return 0;
}