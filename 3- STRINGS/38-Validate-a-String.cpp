#include<stdio.h>
#include<stdlib.h>
#include<cstdio>

int main ()
{
    char a[] = "How are you doing";
    int i, count=0;

    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='0' && a[i]<='9') || (a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
        {
            count;
        }
        else
        {
            printf("Invalid input");
            exit(0);
        }
    }
    return 0;
}