#include<stdio.h>
int length(char*);
char* reverse(char*);
int main()
{
    printf("Length %d\n",length("Computer"));
    printf("Reverse %s\n",reverse("Computer"));
    return 0;
}
int length(char *s)
{
    int i;
    for(i=0;*(s+i)!='\0';i++);
    return(i);
}
char* reverse(char *p)
{
    int i,l;
    char *t;
    for(l=0;*(p+i)!='\n';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return(*p);
}
