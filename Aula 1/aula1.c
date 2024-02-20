#include <stdio.h>
#include "teste.h"

//Exemplo de uma nova função (Deve sempre ser declarada antes de ser chamada)

int main(){

    //Print Hello World    
    printf("Hello World! \n"); //exemplo de printf

    //Criação de variáveis
    int i = 1;
    float f = 3.14;
    long l = 1E10;
    double d = 2.71;
    char c = 'a';

    //Atribuindo valores a variaveis
    scanf("%d", &i); //o & indica qual variavel ele tem que buscar na mamória para colocar o valor
    scanf("%f", &f);
    scanf("%ld", &l);
    scanf("%lf", &d);
    scanf("%c", &c);

    //Exibição de variaveis
    printf("\n%d\n", i);
    printf("%.2f\n", f);
    printf("%ld\n", l);
    printf("%.2lf\n", d);
    printf("%c", c);

    printf("%d", soma(i,l));
}
