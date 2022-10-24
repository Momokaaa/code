#include<stdio.h>
int main()
{
    int n,x,s;
    while(scanf("%d",&n)!=EOF)
    {
        s = 0;
        while(n--)
        {
            scanf("%d",&x);
            s = s + x;
        }
        printf("%d\n",s);
    }
    return 0;
}