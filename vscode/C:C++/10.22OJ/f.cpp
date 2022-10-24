#include <stdio.h>
int main()
{
    int L,M,N,i,x;
    int a[L];
    a[L] = {0};
    scanf("%d %d %d",&L,&M,&N);
    for(i=0;i<M;i++)
    {
        scanf("%d",&x);
        a[x] = a[x] + 1;
    }
    for(i=0;i<N;i++)
    {
        scanf("%d",&x);
        a[x] = 0;
        a[x+1]=0;
        a[x+2]=0;
        a[x-1]=0;
        a[x-2]=0;
    }
    
    return 0;
}