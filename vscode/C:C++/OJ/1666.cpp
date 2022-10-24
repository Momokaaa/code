#include <stdio.h>
int main()
{
    long long n, x, s;
    while (scanf("%lld", &n) != EOF)
    {
        s = 0;
        while (n--)
        {
            scanf("%lld", &x);
            s = s + x;
        }
        printf("%lld\n", s);
    }
    return 0;
}