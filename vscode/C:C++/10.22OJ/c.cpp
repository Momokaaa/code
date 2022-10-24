#include<stdio.h>
int main()
{
    int i;
    double count,x,n,s;
    scanf("%lf",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x);
        s = s + x;
    }
    count = s / n;
    printf("%.2f\n",count);
}