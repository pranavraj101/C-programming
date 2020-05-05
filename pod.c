#include<stdio.h>
#include<math.h>
int main()
{
    char day[7][20]={"Sunday","Monday","Tuesday","Wednessday","Thursday","Friday","Saturday"};
    //printf("%s",day[6]);
    int m,n,d,d1=0,r=0;
    scanf("%d",&n);
    scanf("%d",&d);
    scanf("%d",&m);
    //printf("%d",m);
    d1=abs(m-n);
    r=d1%7;
    printf("%d",r);
    if(r>7)
    {
        r=r-7;
    }
    printf("%s",day[r+d]);
}
