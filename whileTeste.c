/*
2. Escreva um programa que recebe um valor inteiro do usuário e imprima na tela todos os
números inteiros positivos menores que o número inserido pelo usuário. Exemplo: se o usuário
digitou 5, então deve-se mostrar: 1,2,3,4.
Utilize a estrutura de repetição while.
*/

#include <stdio.h>
int main()
{
    int n, i=1; //declaração de variáveis
    printf("Digite um valor: ");
    scanf("%d", &n);

    
    while(i<n){
        printf("%d ", i++);
    }
    
return 0;
}