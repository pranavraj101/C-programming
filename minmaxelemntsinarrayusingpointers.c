#include<stdio.h>
void maxminarray(int arr[],int len,int *max,int *min)
{
    *max=*min=arr[0];
    for(int i=1;i<len;i++)
    {
        if(*min>arr[i])
            *min=arr[i];
        if(*max<arr[i])
            *max=arr[i];
    }
}
int main()
{
    int a[]={3,343,2,46,24,3432,32,3,25,3,546,345,2,412,325};
    int len=sizeof(a)/sizeof(a[0]);
    int max,min;
    maxminarray(a,len,&max,&min);
    printf("The maximum and minimum value of array is %d,%d",max,min);
    return 0;
}
