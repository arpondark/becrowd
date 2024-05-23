#include <stdio.h>
int main()
{
    int a,b,c,d,temp;
    scanf("%d %d %d %d",&a,&c,&b,&d);
    temp= ((b*60)+d)-((a*60)+c);
    if(temp<=0)
    {
        temp +=(24*60);
        
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", temp/60, temp%60);
    return 0;
}