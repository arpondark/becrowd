#include <stdio.h>
int main()
{
    int a ,b,e,f;
    float c,d,h;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&e,&f,&d);
    h=(b*c)+(f*d);
    printf("VALOR A PAGAR: R$ %.2f\n",h);
    return 0;
}