#include <stdio.h>
int main()
{
    int a[7], b[7], i, max_id, max;
    int s = 0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        if (a[i] + b[i] > s)
        {
            s = a[i] + b[i];
            max_id = i;
        }
    }
    if (s > 8)
        max = max_id + 1;
    else
        max = 0;
    printf("%d\n", max);
    return 0;
}