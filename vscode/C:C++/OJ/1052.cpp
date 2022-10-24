#include<stdio.h>
int main()
{
    int i, n;
    int x = 2;
    int s = 2;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        x = x*10 + 2;
        s = s + x;
    }
    printf("%d",s);
}