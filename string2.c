#include<stdio.h>
int main()
{
    char ptr[]="hello";
    char s[10];
    for(int i=0;ptr[i]!='\0';i++)
    {
        s[i]=ptr[i];
    }
    printf("%s",s);
    return 0;
}
