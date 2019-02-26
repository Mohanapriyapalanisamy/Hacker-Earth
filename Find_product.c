#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    long int answer=1,a[10000],n;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        answer=(answer*a[i])%(1000000007);
    }
    printf("%ld",answer);
    return 0;
}
