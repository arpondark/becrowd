#include <stdio.h>
#include <math.h>
int main()
{
    double x1,x2,y1,y2,x,z,z1,a,b,c;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    z=(x2-x1);
    z1=pow(z,2);
    a=(y2-y1);
    b=pow(a,2);
    c=z1+b;
    x=sqrt(c);
    printf("%.4lf\n",x);
    return 0;

}