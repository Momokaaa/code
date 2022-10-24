#include <stdio.h>
int main()
{
    int n, id, i;
    int time = 9999;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < time)
        {
            id = i;
            time = a[i];
        }
    } 
    printf("%d", id + 1);   
    return 0;
}