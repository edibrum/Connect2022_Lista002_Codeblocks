#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERC�CIO 15: Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo, conforme a tabela abaixo.
Fa�a um algoritmo que leia o sal�rio e o cargo de um funcion�rio e calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela,
ele dever�, ent�o, receber 40% de aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a. */

int main()
{
    float s,sn;
    int codigo;

    /*Pede para o usu�rio digitar os dados:*/
    printf("Digite o salario do funcionario: \n");
    scanf("%f",&s);

    printf("Digite o codigo do cargo de acordo com as opcoes: \n 101 - Gerente \n 102 - Engenheiro \n 103 - Tecnico \n 000 - Outro cargo \n \n");
    scanf("%d",&codigo);

    /*Calcula:*/
    if (codigo==101)
        {
        sn=s*1.10;
        printf("Salario anterior: R$ %.2f \n Novo salario: R$ %.2f \n Diferenca: R$ %.2f \n",s,sn,(sn-s));
        }
    else if (codigo==102)
        {
        sn=s*1.20;
        printf("Salario anterior: R$ %.2f \n Novo salario: R$ %.2f \n Diferenca: R$ %.2f \n",s,sn,(sn-s));
        }
    else if (codigo==103)
        {
        sn=s*1.30;
        printf("Salario anterior: R$ %.2f \n Novo salario: R$ %.2f \n Diferenca: R$ %.2f \n",s,sn,(sn-s));
        }
    else if (codigo==000)
        {
        sn=s*1.40;
        printf("Salario anterior: R$ %.2f \n Novo salario: R$ %.2f \n Diferenca: R$ %.2f \n",s,sn,(sn-s));
        }
    else
        {
        printf("Codigo de Funcionario invalido!");
        }


    return 0;
}
