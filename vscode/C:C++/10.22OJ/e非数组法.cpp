#include<bits/stdc++.h>
int main()
{
    int i = 2,maxi = 1;
    double x,s,cha,maxcha = 0.0;
    scanf("%lf",&x);
    s = x;
    while (i < 13)
    {
        scanf("%lf",&x);
        cha = fabs(x-s);
        if (cha >= maxcha)
        {
            maxcha = cha;
            maxi = i;
        }
        s = x;
        i++; 
    }
    printf("%d %d\n",maxi-1,maxi);
    return 0;
}