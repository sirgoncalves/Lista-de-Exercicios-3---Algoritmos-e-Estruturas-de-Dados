/*
8. Escreva um programa que verifique se um número é palíndromo.
Um número é palíndromo se continua o mesmo caso seus dígitos sejam invertidos.
Exemplos: 454 ou 10501
*/

#include <stdio.h>
int main()
{
    int number, inverso=0, aux;
    printf("Insira um numero:");
    scanf("%d",&number);

    aux = number;

    while (aux>0)
    {
        inverso = (inverso*10) + (aux % 10);
        aux = aux / 10;
    }
    
    if (number == inverso){
        printf("eh palindromo.\n");
    } else{
        printf("Nao eh palindromo.\n");
    }
        
return 0;

}

