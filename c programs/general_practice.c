#include<stdio.h>
int main()
{
    int n,digit,n1=0,m,n2=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        digit=n%10;
        if(digit!=0)
            n1=n1*10+digit;
        n=n/10;
    }
    while(n1!=0)
    {
        digit=n1%10;
        n2=n2*10+digit;
        n1=n1/10;
    }
    printf("%d",n2);
}
