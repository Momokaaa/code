#include<stdio.h>
int main()
{
    int n1,n2,x,s;
    scanf("%d",&n1);
    while(n1--)
    {
        scanf("%d",&n2);
        s = 0;
        while(n2--)
        {
             scanf("%d",&x);
             s = s + x;
        }
        printf("%d\n",s);
    }
    return 0;
}