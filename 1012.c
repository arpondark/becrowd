#include <stdio.h>
int main()
{
    double a,b,c,trangle,circle,trapi,squre,re,pi;
    pi = 3.14159;
    scanf("%lf %lf %lf",&a,&b,&c);
    trangle = 0.5*a*c;
    circle=pi*c*c;
    trapi=(a+b)/2*c;
    squre=b*b;
    re=a*b;
    printf("TRIANGULO: %.3lf\n",trangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapi);
    printf("QUADRADO: %.3lf\n",squre);
    printf("RETANGULO: %.3lf\n",re);
    return 0;
}