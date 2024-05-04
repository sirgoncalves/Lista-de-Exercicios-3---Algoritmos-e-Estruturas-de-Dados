/*
4. Desenvolva um algoritmo que leia um valor n inteiro e positivo e que calcula a seguinte soma
S abaixo:
Utilize a estrutura e repetição for
*/

#include <stdio.h>
int main()
{
    int n;
    float result = 0;
    printf("Insira um valor:");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        result += 1.0/i;

    }
    printf("o resultado da serie eh: %.2f", result);

return 0;
}