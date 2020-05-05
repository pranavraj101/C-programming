#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    scanf("%d",&s);
    printf("%d\n",strlen(s));
    int i=0;
    while ( s[i] != '1' )
    {
        printf("%c",s[i]);
        i++ ;
        printf("checker");
    }

    return 0;
}
