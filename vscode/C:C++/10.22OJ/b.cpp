#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > 88 || b > 81)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}