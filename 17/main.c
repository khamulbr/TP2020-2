#include <stdio.h>
#include <stdlib.h>
typedef struct Cadastro {
    char nome[20], rua[20];
    int idade;
    float salario;
} cadastro;

int main()
{
    int TAMANHO = 4;
    cadastro cadauxiliar, cad[4] = {
        "Alessandro", "Rua 10", 47, 1399.90,
        "Maria", "Rua 10", 5, 100,
        "Jose", "Rua 5", 22, 2276.35,
        "Rita", "Rua 5", 28, 9090.90
    };

    FILE *arquivo = fopen("arquivo.dat", "wb");
    fwrite(cad, sizeof(cadastro), TAMANHO, arquivo);
    fclose(arquivo);

    arquivo = fopen("arquivo.dat", "rb");
    fseek(arquivo,2*sizeof(cadastro), SEEK_SET);
    fread(&cadauxiliar, sizeof(cadastro),1, arquivo);
    printf("%s\n%s\n%d\n%.2f\n", cadauxiliar.nome, cadauxiliar.rua, cadauxiliar.idade, cadauxiliar.salario);
    fclose(arquivo);
    return 0;
}
