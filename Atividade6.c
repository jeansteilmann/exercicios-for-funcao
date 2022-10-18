#include <stdio.h>

/*Faça um programa que leia um número N, que será o limite superior de um
intervalo e o incremento I. A seguir, chame uma função, passando N e I como
parâmetros. A função deve imprimir todos os números naturais no intervalo
de 0 até N, de acordo com o incremento. Ex.: para N = 20 e I = 5 serão
impressos: 0, 5, 10, 15, 20.*/
void calcula(int limite, int inc){
    int i;
    for (i = 0; i <= limite; i++)
    {
        printf("%d\n", i);
        i--;
        i = i + inc;
    }
    
}
int main(){
    int superior, incremento;
    printf("Digite o limite superior de um intervalo:");
    scanf("%d", &superior);
    printf("Digite o incremento I desse intervalo: ");
    scanf("%d", &incremento);

    calcula(superior,incremento);
    return 0;
}