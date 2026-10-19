#include<stdio.h>
#include<stdlib.h>
#include<cstdio>

int main()
{

    char a[] = "finding";
    int H[26] = {0}, i;

    for (i=0,j=0; a[i]!='\0',b[i]!='\0'; i++,j++)

    {
        H[a[i]-97]+=1;
        {
            for (i=0;i<26;i++)
            {
                if(H[i]>1)
                {
                    printf("%c is duplicate and count is %d\n",i+97,H[i]);
                }
            }
        }
    }
}