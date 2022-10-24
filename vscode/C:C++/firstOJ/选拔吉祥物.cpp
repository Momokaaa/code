#include <stdio.h>
int main()
{
    int n, i, x;
    scanf("%d", &n);
    int a[101] = {0};
    for (i = 0; i < 2 * n - 1; i++)
    {
        scanf("%d", &x);
        a[x]++;
        if(a[x]>=n)
        printf("%d\n",x);
    }
    return 0;
}