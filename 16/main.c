#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("dados.bin","wb");

    char nome[11] = "Alessandro";
    char produto[100] = "Playstation 5";
    char valor[11] = "R$ 4699,99";
    char loja[50] = "Magazine Luiza";
    char mensagemParte1[100] = "O produto que você comprou com a gente : <i>";
    char mensagemParte2[100] = " com o valor de ";

    fwrite("Saudações, <b>", sizeof(char), 15, arquivo);
    double valor1 = 100.0901;
    fwrite(&valor1, sizeof(double), 1, arquivo);

    fwrite(nome, sizeof(char), strlen(nome), arquivo);
    fwrite("</b><br><br>", sizeof(char), 12, arquivo);
    fwrite(mensagemParte1, sizeof(char), strlen(mensagemParte1), arquivo);
    fwrite(produto, sizeof(char), strlen(produto), arquivo);
    fwrite("</i>", sizeof(char), 4, arquivo);
    fwrite(mensagemParte2, sizeof(char), strlen(mensagemParte2), arquivo);
    fwrite(valor, sizeof(char), strlen(valor), arquivo);
    fwrite("<br><br>", sizeof(char), 8, arquivo);
    fclose(arquivo);

    char *saudacoes;
    double valorLido;
    arquivo = fopen("dados.bin", "rb");

    fread(saudacoes, sizeof(char), 15, arquivo);
    saudacoes[15] = '\0';

    printf("%s\n", saudacoes);
    fread(&valorLido, sizeof(double), 1, arquivo);
    printf("%f\n", valorLido);

    fclose(arquivo);
    return 0;
}
