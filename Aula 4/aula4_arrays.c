#include<stdio.h>

//Ponteiros em arrays

void incArray(int a[]){
    printf("dentro da funcao i = %d \n", a[0]);
    (a[0])++; //No caso do array o valor passado não é uma cópia ele vem como a referencia dele então alterar aqui dentro é o mesmo que alterar na main
    printf("dentro da funcao  i = %d \n", a[0]);
}

void main(){
    //Exemplo com array
    int a[2] = {0, 1000};
    printf("fora da funcao i = %d \n", a);
    incArray(a);
    printf("fora da funcao  i = %d \n", a);
}