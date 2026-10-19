#include<stdio.h>
#include<stdlib.h>
#include<cstdio>

int main()
{
    char a[] = "decimal";
    char b[] = "medical";
    int H[26] = {0}, i;

    for(i=0;a[i]!='\0';i++)
    {
        H[a[i]-97]+=1;
    }

    for(i=0;b[i]!='\0';i++)
    {
        H[b[i]-97]-=1;
    }

    for(i=0;i<26;i++)
    {
        if(H[i]!=0)
        {
            printf("Strings are not anagrams\n");
            return 0;
        }
    }
    printf("Strings are anagrams\n");
    return 0;
}