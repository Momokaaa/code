#include <stdio.h>
int main()
{
    double a[12];
    double x = 0;
    double m;
    int i, b, c;
    scanf("%lf", &a[0]);
    for (i = 1; i < 12; i++)
    {
        scanf("%lf", &a[i]);
        if (a[i] > a[i - 1])
            m = a[i] - a[i - 1];
        else
            m = a[i - 1] - a[i];
        if (m >= x)
        {
            x = m;
            b = i;
            c = i + 1;
        }
    }
    printf("%d %d\n",b,c);
    return 0;
}