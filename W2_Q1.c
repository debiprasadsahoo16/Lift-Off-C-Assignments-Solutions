#include <stdio.h>
#include<string.h>
int main() 
{
    char s1[30],s2[30];
    int l,i;
    gets(s1);
    gets(s2);
    strcat(s1,s2);
    l=strlen(s1);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",s1[i]);
    }
    return 0;
}