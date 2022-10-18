#include <stdio.h>
/*Faça um programa que chame uma função que leia 200 números inteiros e
imprima a quantidade de pares, sua média, a quantidade de ímpares e seu
somatório.*/
calcu(){
    int num,i,somaimpares = 0,impares = 0,pares = 0,somapares = 0;
    float media;
    printf("\nDigite 200 numeros inteiros ");
    for (i = 0; i <= 3; i++)
    {
       scanf("%d",&num);
       if(num % 2 == 0){
            pares++;
            somapares = somapares + num;
       }
       else{
            impares++;
            somaimpares = somaimpares + num;
       }

    }
    media = somapares / pares;
    printf("\nHouveram %d numeros pares, com uma media de valor de %.2f", pares, media);
    printf("\nHouveram %d numeros impares, a soma de todos eles resultou em %d", impares, somaimpares);
    

}
int main(){
    calcu();


    return 0;
}