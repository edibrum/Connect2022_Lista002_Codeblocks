#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERC�CIO 3: Fa�a um algoritmo que leia dois valores inteiros A e B se os valores forem iguais dever� se somar os dois,
caso contr�rio multiplique A por B. Ao final, apresente o resultado. */

int main()
{
    int a,b;

    /*Explica o programa para o usu�rio:*/
    printf("Ola! Voce deve digitar dois numeros inteiros e apresentaremos o resultado: \n SOMA para numeros iguais e MULTIPLICACAO para numeros diferentes.\n \n");
    /*Pede ao usu�rio que digite os valores:*/
    printf("Digite o primeiro numero: \n");
    scanf("%d",&a);
    printf("Digite o segundo numero: \n");
    scanf("%d",&b);

    /*Verifica as situacoes e exibe o resultado para o usu�rio:*/
    if (a==b)
        printf("O resultado e: %d + %d = %d",a,b,a+b);
    else
        printf("O resultado e: %d * %d = %d",a,b,a*b);

    return 0;
}
