#include <stdio.h>
int main()
{
    int a,b;
    double c;
    scanf("%d %d",&a,&b);
    c=(float)a*(float)b/12;
    printf("%.3lf\n",c);
    return 0;
}