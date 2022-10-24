#include <stdio.h>
int main()
{
    int a[10], i;
    int A = 0;
    int B = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
        if (a[i] % 2 == 0)
            A = A + a[i];
        else
            B = B + a[i];
    printf("%d\n", A - B);

    return 0;
}