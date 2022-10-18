#include <stdio.h>
/*Faça um programa que imprima a tabela de conversão de graus CelsiusFahrenheit para o intervalo especificado pelo usuário. O programa deve
solicitar ao usuário os limites superior e inferior do intervalo e o
decremento/incremento (ex. intervalo de 0 a 20, conversão a cada 2
“unidades”).
*/
int main(){
    int inferior, superior,celsius, unidades, i;
    float fahrenheit;
    printf("\nDigite o valor inferior do intervalo: ");
    scanf("%d", &inferior);
    printf("\nDigite o valor inferior do intervalo: ");
    scanf("%d", &superior);

    printf("\nDigite ha cada quantas unidades deve ser mostrada a conversao: ");
    scanf("%d", &unidades);

    for ( i = inferior; i <= superior; i++)
    {
        celsius = i;
        fahrenheit = celsius * 1.8 + 32;
        i--;
        i = i + unidades;
        printf("\ncelsius = %4d\tfahrenheit = %4.2f", celsius, fahrenheit);
    }
    
    return 0;
}