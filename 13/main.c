#include <stdio.h>
#include <stdlib.h>

//1) Utilizando a estrutura abaixo,
//faça um programa para ler o número e as 3 notas de 10 alunos.

typedef struct alu {
    int numero;
    float nota1, nota2, nota3;
} aluno;

int main()
{
    int quantidade = 5;
    aluno alunos[quantidade];
    int index = 0;
    for(index=0; index<quantidade; index++){
      printf("informe o numero do aluno:");
      scanf("%d", &alunos[index].numero);
      printf("informe a primeira nota:");
      scanf("%f", &alunos[index].nota1);
      printf("informe a segunda nota:");
      scanf("%f", &alunos[index].nota2);
      printf("informe a terceira nota:");
      scanf("%f", &alunos[index].nota3);
    };

    for(index=0; index<quantidade; index ++){
        printf("o aluno %d tirou as seguintes notas: N1 = %f / N2 = %f / N3 = %f\n", alunos[index].numero, alunos[index].nota1, alunos[index].nota2, alunos[index].nota3 );
    }
    return 0;
}
