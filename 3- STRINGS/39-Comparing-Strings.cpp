#include<stdio.h>
#include<stdlib.h>
#include<cstdio>

int main()
{
   char a[] = "Painter";
   char b[] = "Painting";
   int i,j;

   for (i=0, j=0; a[i]!='\0' && b[j]!='\0'; i++, j++)
   {
       if (a[i] != b[j])
       {
           printf("Strings are not equal");
           return 0;
       }
   }
   printf("Strings are equal");
   return 0;
}