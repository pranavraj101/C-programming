#include<stdio.h>
#include<math.h>
int main()
{
    int l,u,cl,cu,i;
    scanf("%d",&l);
    scanf("%d",&u);
    cl=cbrt(l);
    cu=cbrt(u);
    if(cl<11)
    cl=11;
    else
    cl=22;
    //printf("%d %d",cl,cu);
    for(i=cl;(i<=cu)&&(i<100);i=i+11)
    {
        int n=i*i*i,m=i*i*i,a,n1=0;
        //printf("i=%d n=%d m=%d\n",i,n,m);
        while(m!=0)
        {
            a=m%10;
            n1=n1*10+a;
            m=m/10;
        }
        if(n1!=n)
        {
            printf("%d\t%d\n",n,i);
        }
    }
    if(i>99)
    {
        cl=111;
        for(i=cl;(i<=cu)&&(i<1000);i=i+111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }
    if(i>999)
    {
        cl=1111;
        for(i=cl;(i<=cu)&&(i<10000);i=i+1111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }
    if(i>9999)
    {
        cl=11111;
        for(i=cl;(i<=cu)&&(i<100000);i=i+11111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }

    if(i>99999)
    {
        cl=111111;
        for(i=cl;(i<=cu)&&(i<1000000);i=i+111111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }

    if(i>999999)
    {
        cl=1111111;
        for(i=cl;(i<=cu)&&(i<10000000);i=i+1111111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }

    if(i>9999999)
    {
        cl=11111111;
        for(i=cl;(i<=cu)&&(i<100000000);i=i+11111111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }

    if(i>99999999)
    {
        cl=111111111;
        for(i=cl;(i<=cu)&&(i<1000000000);i=i+111111111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }

    if(i>999999999)
    {
        cl=1111111111;
        for(i=cl;(i<=cu)&&(i<10000000000);i=i+1111111111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }

    if(i>9999999999)
    {
        cl=11111111111;
        for(i=cl;(i<=cu)&&(i<100000000000);i=i+11111111111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }

    if(i>99999999999)
    {
        cl=111111111111;
        for(i=cl;(i<=cu)&&(i<1000000000000);i=i+111111111111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }

    if(i>999999999999)
    {
        cl=1111111111111;
        for(i=cl;(i<=cu)&&(i<10000000000000);i=i+1111111111111)
        {
            int n=i*i*i,m=i*i*i,a,n1=0;
            //printf("i=%d n=%d m=%d\n",i,n,m);
            while(m!=0)
            {
                a=m%10;
                n1=n1*10+a;
                m=m/10;
            }
            if(n1!=n)
            {
                printf("%d\t%d\n",n,i);
            }
        }
    }


}
