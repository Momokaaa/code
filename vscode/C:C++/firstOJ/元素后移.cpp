#include <stdio.h>
int main()
{
    int a[10];
    int i;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf(" %d", a[9]);
    for (i = 0; i < 9; i++)
        printf(" %d", a[i]);
    return 0;
}