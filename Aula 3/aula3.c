#include <stdio.h>

void initArray(int a[], int t){
    int i;
    for (i = 0; i < t; i++)
    {
        a[i] = i*i;
    }
    
}

void printArray(int a[], int t){
    int i;
    for (i = 0; i < t; i++)
    {
        printf("%d \n", a[i]);
    }
    
}

int soma(int a[], int t){
    int resultado = 0;

    int i;
    for(i=0; i<t; i++){
        resultado += a[i];
    }

    return resultado;
}

int main(){
    // int array[10];
    // array[0] = 0;
    // array[1] = 1;

    // int i; //Sempre inicializar a variavel antes de usar
    // int tamanho = (sizeof(array)/sizeof(int)); //função usada para descobrir o tamanho de um array que eu não sei o tamanho
    // for (i = 0; i < 10; i++)
    // {
    //     array[i] = i;
    //     printf("%d: %d \n",i, array[i]);
    //     printf("o tamanho do array eh: %d \n", tamanho);
    // }

    // int t = 10;
    // int a[t];

    // initArray(a,t);
    // // printArray(a,t);
    // printf("A soma de todos os termos eh igual ah: %d \n", soma(a, t));

    //Matrizes

    int m[5][5]; //definição de matriz //Para criar matrizes ele aloca espaços sequenciais como os arrays podendo ser acessado assim também
    int i;
    int j;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            m[i][j] = i*j;
        }
        
    }
    

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d", m[i][j]);
        }
        printf("\n");
        
    }

    
}