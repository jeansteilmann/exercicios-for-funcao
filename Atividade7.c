#include <stdio.h>

/*a) Faça um programa que leia um valor inteiro N. A seguir, chame uma função
que calcule o valor de H (também inteiro), conforme a série abaixo. A função
deve retornar o valor de H, o qual deve ser impresso pela função main.
b) Faça uma outra versão do programa do item a) considerando que os
valores de N e H são reais.
H = 1 + 1/2 + 1/3...+ 1/N
*/
float calculadora(float n){
    int i;
    float h;
    for (i = 1; i <= n; i++)
    {
        h = h + 1/i;
    }
    
    return h;
}
int main(){
    float n, resultado;
    
    printf("Digite um valor real: ");
    scanf("%f", &n);
    resultado = calculadora(n);
    printf("O resultado da soma dessa serie e %.2f", resultado);

    return 0;
}