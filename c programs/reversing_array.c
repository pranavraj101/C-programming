#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n],arr2[n],i,j;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
           arr2[j]=arr[i];
    }
    for(i=0;i<n;i++)
    {
            printf("%d ",arr2[i]);
    }
    return 0;
}
