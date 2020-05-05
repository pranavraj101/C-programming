#include<stdio.h>
struct
{
    int no;
    char *name;
}car1,car2;
int main()
{
    car1.name="hfjdhfi";
    car2.name="udfhwiuahf";
    car1.no=213;
    car2.no=212;
    printf("%d %d %s %s",car1.no,car2.no,car1.name,car2.name);
}
