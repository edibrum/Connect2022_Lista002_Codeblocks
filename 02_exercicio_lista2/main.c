#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERC�CIO 2: Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar. */

int main()
{
    int numero;

    /*Pede para o usu�rio digitar o n�mero: */
    printf("Digite o numero:\n");
    scanf("%d",&numero);

    /*Confere se � par ou �mpar:*/
    if (numero%2==0)
    printf("O numero %d e par. \n",numero);

    else
    printf("O numero %d e impar. \n",numero);

    return 0;
}
