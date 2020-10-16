#include <stdio.h>
#include <stdlib.h>

struct cadastro {           // 166 de memoria
    char nome[50];          // 50 de memoria
    char nomeSocial[50];          // 50 de memoria
    unsigned int idade;     // 4 de memoria
    char endereco[100];     // 100 de memoria
    unsigned int numero;    // 4 de memoria
    double salario;         // 8 de memoria
};

struct aluno {                  // 16 de memoria
    int numero;                 // 4 de memoria
    float notas[3];             // 12 de memoria (4 para cada)
};

int main()
{
    int valor; //4 de memoria

    struct cadastro cadastro1, cadastro2, cadastro3, cadastro4, cadastro5, cadastro6, cadastro7, cadastro8, cadastro9, cadastro10; // 166 de memoria

    struct cadastro outroCadastro; // 166 de memoria
    printf("O nome do cara era: %s\n", outroCadastro.nome);
    printf("O nome social do cara era: %s\n", outroCadastro.nomeSocial);

    strcpy(outroCadastro.nome, "Alessandro");
    strcpy(outroCadastro.nomeSocial, "Superprof");
    outroCadastro.idade = 46;

    printf("O nome do cara eh: %s\n", outroCadastro.nome);
    printf("O nome social do cara eh: %s\n", outroCadastro.nomeSocial);
    printf("A idade do cara eh: %d\n", outroCadastro.idade);

    struct aluno aluno1; // 16 de memoria
    struct aluno aluno2; // 16 de memoria
    struct aluno aluno3; // 16 de memoria

    return 0;
}
