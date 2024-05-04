/*
7. Escreva um programa que recebe um valor inteiro do usuário e imprima quantos dígitos o
número inserido possui. Exemplo: se o usuário digitar 2.750 então o programa deverá imprimir
“4 dígitos
*/

#include <stdio.h>
int main()
{
    int number, cont=0;

    printf("Digite um numero inteiro:");
    scanf("%d",&number);
   
    do
    {
        number = number/10.0;
        cont++;
    } while (number!=0);
    


    printf("O numero possui %d digitos", cont);
    
}