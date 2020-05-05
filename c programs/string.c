#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char s[40],ch,*s1="";
    gets(s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
            ch=(char)s[i];
            if(ch==' ')
            {
                    printf("%s\n",s1);
                    s1="";
            }
            else
            {
                    s1=strcat(s1,ch);
            }


    }
    return 0;
}

