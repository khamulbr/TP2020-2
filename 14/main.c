#include <stdio.h>
#include <stdlib.h>
typedef struct aluno {
    char nome[20];
    int idade;
} Aluno;


void grava(){
    int i;
    char texto[100];
    FILE *arquivo;
    arquivo = fopen("teste.txt", "w");
    if (arquivo == NULL){
        printf("nao consegui abrir o arquivo\n");
        system("pause");
        exit(1);
    }

    printf("informe uma string:");
    gets(texto);

    //for(i = 0; i < strlen(texto); i++){
    //    fputc(texto[i], arquivo);
    //}
    int result = fputs(texto, arquivo);
    if (result == EOF) {
        printf("nao consegui escrever no arquivo\n");
        system("pause");
        exit(2);
    }

    fclose(arquivo);
}

void le(){
    int i;
    FILE *arquivo;
    char c;
    char dados[100];
    char* result;

    arquivo = fopen("teste.txt", "r");
    if (arquivo == NULL){
        printf("nao consegui abrir o arquivo\n");
        system("pause");
        exit(1);
    }

    //while ((c = fgetc(arquivo)) != EOF)
    //    printf("%c\n", c);
    result = fgets(dados, 100, arquivo);
    if (result == NULL){
        printf("nao consegui ler o arquivo\n");
        system("pause");
        exit(3);
    }

    printf("%s", dados);

    fclose(arquivo);
}

void imprime(Aluno *alunos, int qtdAlunos){
    int i = 0;
    Aluno *auxAluno = alunos;
    printf("dentro da funcao - %p\n", alunos);
    do {
        printf("%s\n", auxAluno->nome);
        i++;
        auxAluno++;
        printf("dentro do laco - %p\n", auxAluno);
    }while(i<qtdAlunos);
}

int main()
{
    Aluno *alunos;
    int i = 0;
    int opcao;
    int qtdAlunos = 1;
    alunos = malloc(sizeof(Aluno));

    do {
        printf("informe o nome:");
        scanf("%s", alunos->nome);
        printf("Voce quer continuar cadastrando? Digite 1 para sim\n");
        scanf("%d", &opcao);
        if (opcao != 1) {
            qtdAlunos++;
            alunos = realloc(alunos, qtdAlunos * sizeof(Aluno));
        }
    } while(opcao == 1);

    printf("no main - %p\n", alunos);

    imprime(alunos, qtdAlunos);

    //grava();
    //le();
    return 0;
}
