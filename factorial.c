#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number,factorial=1,i;
    scanf("%d",&number);
    if(number>1)
    {
       for(i=1;i<=number;i++)
       {
        factorial=factorial*i;
        }
        printf("%d",factorial);
    }

    else
    {
       printf("%d",factorial);
    }
    return 0;
}
