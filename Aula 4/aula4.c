#include<stdio.h>


//Ponteiros

void inc(int* i){
    //Esse i dentro da função é uma cópia da variavel principal criada na main, então a cópia é incrementada mas a variavel original não.
    
    //int* variavel representa que você esta passando a váriavel como um ponteiro ou seja ao alterar aqui dentro ele modifica a variavel da main
    printf("dentro da funcao i = %d \n", *i);
    (*i)++; 
    printf("dentro da funcao  i = %d \n", *i);
}



void main(){
    //Exemplo com int
    // int i = 1;
    // printf("fora da funcao i = %d \n", i);
    // inc(&i);
    // printf("fora da funcao  i = %d \n", i);

    //Exemplo de ponteiros
    long i = 1;
    long *p = &i;
    //Nesse caso p é um ponteiro e aponta para um endereço de memória

    // printf("Valor de i = %d\n", i);
    // printf("Valor apontado por p = %d\n", *p);

    // printf("Endereco de i = %p\n", &i);
    // //por isso o valor de p e o endereço de i são iguais
    // printf("Valor de p = %p\n", p);
    // //Aqui é o endereço dele que é um espaço na memória que dentro tem um endereço de memória
    // printf("Endereco de p = %d\n", &p);

    // Somar 0 não interfere em nada é o mesmo que falar que você quer o primeiro elemento, então quando você pede o caminho do elemento de um array na posição 0 é o mesmo que fazer isso somar 0 ao caminho do array
    printf("&i+0  = %p\n", p+0);

    //Fazer esse processo de somar um ao endereço de p (ou de i) você fica andando de 4 em 4 bits para int e 8 em 8 para longs, assim você consegue visualizar quanto de espaço cada tipo ocupa na memória
    //isso tudo em hexadecimal
    printf("&i + 1 = %p\n", p+1);
    printf("&i + 2 = %p\n", p+2);
    printf("&i + 3 = %p\n", p+3);
    printf("&i + 4 = %p\n", p+4);

}