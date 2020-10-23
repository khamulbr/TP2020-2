#include <stdio.h>
#include <stdlib.h>

typedef struct end {
    char logradouro[100];     // 100 de memoria
    unsigned int numero;    // 4 de memoria
} endereco;

typedef struct cad {           // 166 de memoria
    char nome[50];          // 50 de memoria
    char nomeSocial[50];          // 50 de memoria
    unsigned int idade;     // 4 de memoria
    double salario;         // 8 de memoria
    endereco endResidencial;
    endereco endComercial;
} cadastro;

typedef struct alu {                  // 16 de memoria
    int numero;                 // 4 de memoria
    float notas[3];             // 12 de memoria (4 para cada)
} aluno;

int main()
{
    int valor; //4 de memoria

    cadastro cadastro1, cadastro2, cadastro3, cadastro4, cadastro5, cadastro6, cadastro7, cadastro8, cadastro9, cadastro10; // 166 de memoria

    cadastro outroCadastro; // 166 de memoria
    printf("O nome do cara era: %s\n", outroCadastro.nome);
    printf("O nome social do cara era: %s\n", outroCadastro.nomeSocial);

    strcpy(outroCadastro.nome, "Alessandro");
    strcpy(outroCadastro.nomeSocial, "Superprof");
    outroCadastro.idade = 46;

    printf("O nome do cara eh: %s\n", outroCadastro.nome);
    printf("O nome social do cara eh: %s\n", outroCadastro.nomeSocial);
    printf("A idade do cara eh: %d\n", outroCadastro.idade);

    aluno aluno1; // 16 de memoria
    aluno aluno2; // 16 de memoria
    aluno aluno3; // 16 de memoria

    cadastro cadastros[100];
    for (int i=0; i<4; i++){
        printf("Dados do cadastro: %d\n", i);
        printf("=====================\n");
        printf("Informe o nome:");
        setbuf(stdin, NULL);
        gets(cadastros[i].nome);
        printf("Informe o nome social:");
        setbuf(stdin, NULL);
        gets(cadastros[i].nomeSocial);
        printf("Informe a idade:");
        scanf("%d", &cadastros[i].idade);
        printf("Informe o salario:");
        scanf("%lf", &cadastros[i].salario);
        printf("Informe o endereco residencial:");
        setbuf(stdin, NULL);
        gets(cadastros[i].endResidencial.logradouro);
        printf("Informe o numero do endereco residencial:");
        scanf("%d", &cadastros[i].endResidencial.numero);
    }

    double totalSalarios = 0;

    for (int i=0; i<4; i++){
        printf("\nDados cadastrados: %d\n", i);
        printf("=====================\n");
        printf("Nome: %s\n", cadastros[i].nome);
        printf("Nome social: %s\n", cadastros[i].nomeSocial);
        printf("idade: %d\n", cadastros[i].idade);
        printf("salario: %lf\n", cadastros[i].salario);
        printf("endereco residencial: %s\n", cadastros[i].endResidencial.logradouro);
        printf("numero: %d\n", cadastros[i].endResidencial.numero);
        totalSalarios = totalSalarios + cadastros[i].salario;
    }
    printf("\no total de salarios eh de : %lf", totalSalarios);
    printf("\na media salarial dessa galera acima eh de : %lf", totalSalarios/4);

    return 0;
}
