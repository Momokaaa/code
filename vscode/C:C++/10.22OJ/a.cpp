#include <stdio.h>
int main()
{
    int n,k,i,a;
    double x,w;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
        scanf("%d %lf",&k,&x);
        a = (int)x;
        if(k == 1 )
        w = (a-20)*5.8;
        else if(k == 2) w= (a-50)*7.5;
        else if(k == 3) w= (a-30)*4.2;
        if(w<0) w=0;
        printf("%.1f\n",w);
       }   
    return 0;
}