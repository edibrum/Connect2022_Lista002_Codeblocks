#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERC�CIO 16: Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. Fa�a
um algoritmo que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.
*/

int main()
{
    float saldomedio,credito;

    /*Pede ao usuario que digite os dados:*/
    printf("Digite o saldo medio do cliente no ultimo ano: \n");
    scanf("%f",&saldomedio);

    if (saldomedio<=200.00)
    credito=0.00;

    else if (saldomedio<=400.00)
    credito=saldomedio*0.2;

    else if (saldomedio<=600.00)
    credito=saldomedio*0.3;

    else if (600.00<saldomedio)
    credito=saldomedio*0.4;

    /*Mostra o resultado:*/
    printf("Saldo medio: R$ %.2f \n \n",saldomedio);
    printf("Credito concedido: R$ %.2f \n \n",credito);


    return 0;
}
