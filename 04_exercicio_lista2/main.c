#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
 EXERC�CIO 4: Encontrar o dobro de um n�mero caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado. */

int main()
{
    int a;

    /*Explica o programa para o usu�rio:*/
    printf("Ola! Voce deve digitar um numero e apresentaremos o resultado: \n o DOBRO para um numero positivo e o TRIPLO para um numero negativo.\n \n");

    /*Pede ao usu�rio que digite o valor:*/
    printf("Digite o numero: \n");
    scanf("%d",&a);

    /*Verifica as situacoes e exibe o resultado para o usu�rio:*/
    if (a>=0)
        printf("O numero %d e positivo e o seu dobro e: %d",a,2*a);
    else
        printf("O numero %d e negativo e o seu triplo e: %d",a,3*a);

    return 0;
}
