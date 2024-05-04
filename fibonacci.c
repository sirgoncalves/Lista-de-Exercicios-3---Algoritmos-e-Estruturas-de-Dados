/*
6. Desenvolva um algoritmo que imprima os n primeiros elementos da série de Fibonacci.
Ex.: Se n = 10, imprimir os 10 primeiros números da sequência de Fibonacci.
*/

#include <stdio.h>
int main()
{
    int n, sequencia=1, variavel1=1, variavel2=1;

    printf("Insira uma quantidade de numeros: ");
    scanf("%d", &n);

    printf("1 elemento: 1\n");

    for(int i=1; i<=n; i++){
        printf("%d elemento: %d\n",i+1,variavel1);
            variavel2 = sequencia;
            sequencia = variavel1;
            variavel1 = variavel2+sequencia;
    }
}

/*
1
1
2
3
5
8
13
21
*/