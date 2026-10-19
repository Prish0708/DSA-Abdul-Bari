#include<stdio.h>
#include<stdlib.h>
#include<cstdio>

int main ()
{
    char a[] = "How are you doing";
    int i, count=0, vcount=0;

    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
            a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            vcount++;
        }
else if((a[i]>='0' && a[i]<='9') || (a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
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