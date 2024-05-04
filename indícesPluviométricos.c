/*
5. Escreva um programa que seja capaz de ler do teclado 31 valores reais correspondentes ao
índice pluviométrico diário da região da Pampulha durante o mês de janeiro. O programa deve
determinar e imprimir o índice pluviométrico médio, o índice pluviométrico máximo e o dia que
ele ocorreu
*/

#include <stdio.h>
int main()
{
    float valor, maior=1, soma;
    int dia=1, j;
    
    printf("Insira valores que correspondam a um indices pluviometricos: \n");
        for(j=1;j<=31;j++){
            printf("Dia %d: ", j);
            scanf("%f", &valor);

            if(valor > maior){
                maior = valor;
                dia = j;
            }
            soma+=valor;
        }
    

    printf("Indice pluviometrico medio: %.2f\n",soma/31);
    printf("Indice pluviometrico maximo: %.2f\n", maior);
    printf("Primeiro dia em que ocorreu: %d", dia);

return 0;  
 
}