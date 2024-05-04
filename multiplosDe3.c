/*3. Escreva um algoritmo que leia n valores, um de cada vez, e conte quantos destes valores são
múltiplos de 3, escrevendo esta informação. A leitura deve finalizar quando o valor lido for igual
a 0.
Utilize a estrutura e repetição do-while*/

#include <stdio.h>
int main()
{
    int cont=0, valor;
    
    do
    {
        printf("insira um valor: ");
        scanf("%d", &valor);
        if(valor%3==0 && valor!=0){
            cont++;
        }
    } while (valor!=0);

    printf("Existem %d multiplos de 3", cont);
    
}