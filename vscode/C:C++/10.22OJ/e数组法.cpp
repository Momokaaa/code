#include <stdio.h>
int main()
{
    double a[12];
    double x = 0;//作为每个月份的猪肉价格
    double m;//作为相邻两个月的差值
    int i, b, c;//i为for循环需要，用于记录数组序号，b c 为差值最大的相邻两个月
    scanf("%lf", &a[0]);
    for (i = 1; i < 12; i++)
    {
        scanf("%lf", &a[i]);
        if (a[i] > a[i - 1])
            m = a[i] - a[i - 1];
        else
            m = a[i - 1] - a[i];// 该if else语句保证了m取绝对值
        if (m >= x)
        {
            x = m;
            b = i;
            c = i + 1;//保存差值最大时，记录当前相邻月份
        }
    }
    printf("%d %d\n",b,c);
    return 0;
}