#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERC�CIO 8: Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o normal de etiqueta e a escolha
da condi��o de pagamento. Utilize os c�digos da tabela a seguir para ler qual a condi��o de pagamento escolhida e efetuar o c�lculo
adequado. C�digo Condi��o de pagamento
a) � vista em dinheiro ou cheque, recebe 10% de desconto
b) � vista no cart�o de cr�dito, recebe 15% de desconto
c) Em duas vezes no cartao da loja, pre�o normal de etiqueta sem juros
d) Em duas vezes no cartao de credito, pre�o normal de etiqueta mais juros de 10% */

int main()
{
    float preco,total;
    int opcao;

    /*Pede ao usu�rio que digite o preco normal de etiqueta:*/
    printf("Digite o preco normal de etiqueta em reais: \n");
    scanf("%f",&preco);

    /*Pede ao usu�rio que digite a condi��o:*/
    printf("Digite a opcao: \n 1 - A vista em dinheiro ou cheque (10%% de desconto) \n 2 - A vista no cartao de credito (15%% de desconto) \n 3 - Em duas vezes no cartao da loja (preco da etiqueta) \n 4 - Em duas vezes no cartao de credito (10%% de acrescimo \n");
    scanf("%d",&opcao);

    /*Analisa a situa��o e calcula:*/
    if (opcao==1)
        total=preco*0.9;
    else if (opcao==2)
        total=preco*0.85;
    else if(opcao==3)
    total=preco;
    else if (opcao==4)
    total=preco*1.10;

    /*Mostra o resultado:*/
     printf("Valor a pagar: R$ %.2f \n",total);
    return 0;
}
