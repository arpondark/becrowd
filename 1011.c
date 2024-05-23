#include <stdio.h>
int main()
{
    double r,pi,area;
    pi=3.14159;
    scanf("%lf",&r);
    area =(4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",area);
    return 0;
}