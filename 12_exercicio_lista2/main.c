#include <stdio.h>
#include <stdlib.h>
/*LISTA 2:
EXERC�CIO 12: Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se
forem verificar se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo, escrever a mensagem.
Considere as seguintes propriedades:
a. O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
b. Equil�teros: tem os comprimentos dos tr�s lados iguais;
c. Is�sceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos tr�s lados diferentes.
*/
int main()
{
    float a,b,c;

    /*Pede que o usu�rio digite os dados:*/
    printf("Digite a medida do lado A do triangulo: \n");
    scanf("%f",&a);

    printf("Digite a medida do lado B do triangulo: \n");
    scanf("%f",&b);

    printf("Digite a medida do lado C do triangulo: \n");
    scanf("%f",&c);

    /* Verifica e calcula*/
    if ((a+b)>c){
      if ((b+c)>a){
        if((a+c)>b){
            printf("O triangulo existe e e do tipo: \n");
            if (a!=b && a!=c && b!=c)
            printf("ESCALENO \n");
            else if (a==b && b==c)
            printf("EQUILATERO \n");
            else
            printf("ISOSCELES \n");
         }
      }
    }

    return 0;
}
