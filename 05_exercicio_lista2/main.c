#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERC�CIO 5: Fa�a um algoritmo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar, imprimir o resultado desta opera��o. */

int main()
{
    int numero;

    /*Pede para o usu�rio digitar o n�mero: */
    printf("Digite o numero:\n");
    scanf("%d",&numero);

    /*Confere se � par ou �mpar:*/
    if (numero%2==0)
    printf("O numero e par e o resultado e: %d+5=%d. \n",numero,numero+5);

    else
    printf("O numero e impar e o resultado e: %d+8=%d. \n",numero,numero+8);

    return 0;
}
