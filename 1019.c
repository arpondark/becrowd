#include <stdio.h>
int main()
{
    int a,b,c,e;
    scanf("%d",&a);
    b=a/3600;
    a%=3600;
    c=a/60;
    a%=60;
    e=a;

    printf("%d:%d:%d\n", b,c,e);
    return 0;

}