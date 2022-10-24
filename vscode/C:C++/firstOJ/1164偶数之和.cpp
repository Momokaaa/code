#include<stdio.h>
int main()
{
    int n,x,i;
    int s = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2 == 0) 
            {
                s = s + x;
            }
    }
    printf("%d\n",s);
    return 0;
}