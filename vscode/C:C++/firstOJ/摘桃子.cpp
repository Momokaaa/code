#include <stdio.h>
int main()
{
    int a[10], h, i;
    int n = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &h);
    for (i = 0; i < 10; i++)
        if (a[i] <= h + 30)
            n = n + 1;
    printf("%d\n", n);

    return 0;
}