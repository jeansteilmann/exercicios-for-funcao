#include <stdio.h>

/*Faça um programa que chame uma função que leia 20 números e imprima a
soma dos números cujos quadrados são menores que 225.*/
void calculadora(){
    int i,count;
    float numero, soma;
    printf("Digite 20 numeros: ");
    for ( i = 1; i <= 20; i++)
    {
        scanf("%f", &numero);
        if(numero * numero < 225){
            soma = soma + numero;
        }
    }
    printf("A soma dos numeros cujos quadrados sao menores que 225 resultou em %.2f", soma);
    
}
int main(){

    calculadora();

    return 0;
}