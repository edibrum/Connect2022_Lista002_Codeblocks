#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERC�CIO 10: Elabore um algoritmo que leia dois n�meros inteiros e mostre o resultado da diferen�a do maior valor pelo menor; */
int main()
{
    int a,b,dif;

    /*Pede ao usu�rio que digite os dados:*/
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d",&a);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d",&b);

    /*Calculo:*/
    if (a>=b)
    {
    dif=a-b;
    } else
    {
    dif=b-a;
    }

    /*Mostra o resultado:*/
    printf("A diferenca entre o numero maior e o menor e: %d. \n",dif);

    return 0;
}
