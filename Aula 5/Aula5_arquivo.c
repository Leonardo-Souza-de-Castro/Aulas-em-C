#include <stdio.h>
#include <string.h>

enum ERRO {OK, ABRIR, FECHAR, LER, ESCREVER};

void escreveArq(char nome[]){
    //Abrindo arquivo:
                                    //w -> escrita
    FILE *f = fopen(nome, "w");//r -> leitura
                                    //a -> append (adição)
    //fprintf(arquivo, valor) -> função para escrever no arquivo
    fprintf(f, "Hello, World\n");
    int i = 1234;
    fprintf(f, "i = %d\n", i); //stdout -> parametro que mostra o dado enviado na tela
    //Fechando arquivo
    fclose(f);
}

enum ERRO leArq(char nome[]){
    //Abrindo arquivo:
    FILE *f = fopen(nome, "r");
    if(f == NULL){ //testa se o arquivo existe, se não existir o valor de f é null
        return ABRIR;
    }

    char linha[255];
    //fscanf(f, "%[^\n]s", linha); //leitura de uma linha no arquivo
    //[^\n] -> Fala que ele deve ler a linha até o \n
    //Se o fscnaf chega na última linha e você repete ele, ele vai ler denovo a ultima linha

    char *s = fgets(linha, 255, f); //Outra opção para ler linhas do arquivo
    if(strlen(s) == 0){
        return LER;
    }
    printf("Linha: %s\n", linha);
    //Fechando arquivo
    int i = fclose(f);

    if (i != 0){
        return FECHAR;
    }
}

//leitura de arquivo binário
typedef struct{
    char nome[100];
    long cpf;
} Pessoa;

void printPessoa(Pessoa ps[], int t){
    int i = 0;
    for (i; i < t; i++)
    {
        printf("Nome: %s\tCPF: %ld\n", ps[i].nome, ps[i].cpf);
    }
    
}

int main(){
    // escreveArq("teste.txt");
    // int erro = leArq("teste.txt");

    // printf("Erro = %d", erro);
    int t = 2;

    Pessoa ps[2];

    ps[0].cpf = 123456789;
    strcpy(ps[0].nome, "Nome 0") ;
    ps[1].cpf = 123456987;
    strcpy(ps[1].nome, "Nome 1") ;

    printPessoa(ps, t);

    FILE *f = fopen("teste", "wb"); //wb -> write binarie
    fwrite(ps,t,sizeof(Pessoa),f); //recebe o array, o tamanho, o tamanho do tipo de dado e o arquivo
}