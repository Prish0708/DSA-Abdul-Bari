#include<stdio.h>
#include<stdlib.h>
#include<cstdio>

int main()
{
    char a[] = "welcome";
    int i ;

    for(i=0;a[i]!='\0';i++);
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i] = a[i] - 32;
        }
        else if (a[i]>='A' && a[i]<='Z')
        {
            a[i] = a[i] + 32;
        }
    }

    return 0;
}