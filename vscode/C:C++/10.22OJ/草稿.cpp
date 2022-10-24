#include <stdio.h>
int main()
{
    int L, M, N, i, x;
    int a[L];
    a[L] = {0};
    int m = 0;
    scanf("%d %d %d", &L, &M, &N);
    for (i = 0; i < M; i++)
    {
        scanf("%d", &x);
        a[x] = a[x] + 1;
        m = m + 1;
    }
    for (i = 0; i < N; i++)
    {
        scanf("%d", &x);
        if (a[x] = 1)
        {
            a[x] = 0;
            m = m - 1;
        }
        if (a[x + 1] = 1)
        {
            a[x + 1] = 0;
            m = m - 1;
        }
        else if (a[x + 2] = 1)
        {
            a[x + 2] = 0;
            m = m - 1;
        }
        else if (a[x - 1] = 1)
        {
            a[x - 1] = 0;
            m = m - 1;
        }
        else if (a[x - 2] = 1)
        {
            a[x - 2] = 0;
            m = m - 1;
        }
    }
    printf("%d\n", m);
    return 0;
}