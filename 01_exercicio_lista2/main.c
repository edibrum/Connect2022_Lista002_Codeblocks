#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERC�CIO 1: Fa�a um algoritmo que leia dois valores A e B e imprima o maior deles. */

int main()
{
    int a,b;

    /* Pede para o usu�rio digitar os valores: */
    printf("Digite o primeiro valor: \n");
    scanf("%d",&a);

    printf("Digite o segundo valor: \n");
    scanf("%d",&b);

    /* Compara os dois valores: */
    if (a>b)
    printf("O maior valor e %d. \n",a);

    else if (b>a)
    printf("O maior valor e %d. \n",b);

    else
    printf("Os dois valores sao iguais: %d = %d. \n",a,b);

    return 0;
}
