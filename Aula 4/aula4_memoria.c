#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = malloc(5*sizeof(int)); //A função malloc ela da a possibilidade de você reservar um espaço de um ponteiro sem precisar instanciar uma variavel antes, é preciso só falar o tamanho do espaço a ser reservado

    //multiplicar o sizeof gera um array

    *(p+0) = 1; //declarar assim ou como p[0] da na mesma e vice e versa também
    *(p+1) = 2;

    printf("%d\n", p[0]);
    printf("%d\n", p[1]);

    free(p); //função q dessaloca a memória da variavel p para não travar o programa
}
