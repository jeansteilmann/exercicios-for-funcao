#include <stdio.h>
/*Faça programa que calcule e escreva a soma dos números que não são
múltiplos de 13 no intervalo entre 100 e 200.
*/
int main(){
    int soma = 0, i, resto;
    for (i = 100; i <= 200; i++)
    {
        resto = i % 13;
        if(resto == 0){
            soma = soma + i;
        }
    }
    printf("\nA soma dos numeros multiplos de 13 entre no intervalo 100-200 e %d", soma);
    
    return 0;
}