#include<stdio.h>
int main()
{
    int L,N,W[1000],H[1000],i;
    scanf("%d",&L);
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d%d",&W[i],&H[i]);
    }
    for(i=0;i<N;i++)
    {
        if((W[i]<L)||(H[i]<L))
           printf("UPLOAD ANOTHER\n");
        else if((W[i]>=L)||(H[i]>=L))
        {
            if(W[i]==H[i])
              printf("ACCEPTED\n");
            else
              printf("CROP IT\n");
        }
    }
    return 0;
}
Language: C
