#  include   <stdio.h>
# include  <stdlib.h>

typedef struct{
    char

    nome
    [
        30
    ];





    char

    tipo
    [
        30
    ];





    float

    preco
    ;






}
instrumento
;






typedef

struct

    no




{





    instrumento

    info
    ;





    struct

        no
        *
        prox
        ;






}
nodo
;






void

AlocarInstrumento
(
    nodo
    * *
    lista
);




void

ImprimeInstrumentos
(
    nodo
    *
    lista
);






int

main
()




{





    nodo
    *
    lista
        =
            NULL
            ;





    int

    quantidade
        =
            0
            ;







    puts
    (
        "Quantos instrumentos voce deseja?"
    );





    scanf
    (
        "%d"
        , &
        quantidade
    );







    // REGISTRA





    for
    (
        int

        i
        =
            0
            ;
        i
        <
        quantidade
        ;
        i
        ++)




    {





        system
        (
            "cls"
        );





        printf
        (
            "Instrumento: %d \n           "
            ,
            i
            +
            1
        );










        AlocarInstrumento
        (&
         lista
        );




    }







    // IMPRIME





    for
    (
        int

        i
        =
            0
            ;
        i
        <
        quantidade
        ;
        i
        ++)




    {





        ImprimeInstrumentos
        (
            lista
        );




    }







    return

        0
        ;




}






void

AlocarInstrumento
(
    nodo
    * *
    lista
)




{





    nodo
    *
    no
        = (
              nodo
              *)
          malloc
          (
              sizeof
              (
                  nodo
              ));







    if
    (
        no
        !=
        NULL
    )




    {





        puts
        (
            "Nome:"
        );





        fflush
        (
            stdin
        );





        gets
        (
            no
            ->
            info
            .
            nome
        );










        puts
        (
            "Tipo:"
        );





        fflush
        (
            stdin
        );





        gets
        (
            no
            ->
            info
            .
            tipo
        );







        puts
        (
            "preco:"
        );





        scanf
        (
            "%f"
            , &
            no
            ->
            info
            .
            preco
        );







        no
        ->
        prox
            =
                NULL
                ;










        if
        (*
                lista
                ==
                NULL
        )




        {




            *
            lista
                =
                    no
                    ;




        }





        else




        {





            nodo
            *
            aux
                = *
                  lista
                  ;







            while
            (
                aux
                ->
                prox
                !=
                NULL
            )




            {





                aux
                    =
                        aux
                        ->
                        prox
                        ;




            }










            aux
            ->
            prox
                =
                    no
                    ;




        }




    }





    else




    {





        puts
        (
            "Erro ao alocar memoria"
        );




    }







    system
    (
        "cls"
    );




}






void

ImprimeInstrumentos
(
    nodo
    *
    lista
)




{





    int

    countLista
        =
            0
            ;







    if
    (
        lista
        ==
        NULL
    )




    {





        puts
        (
            "[Lista vazia]"
        );




    }





    else




    {





        while
        (
            lista
            !=
            NULL
        )




        {





            puts
            (
                "----------------------------------------------------"
            );





            printf
            (
                "Instrumento: %d                 \n                "
                ,
                countLista
                +
                1
            );





            printf
            (
                "                \n                 Nome: %s"
                ,
                lista
                ->
                info
                .
                nome
            );





            printf
            (
                "                \n                Tipo: %s"
                ,
                lista
                ->
                info
                .
                tipo
            );





            printf
            (
                "                \n                Preco: %.2f                \n                "
                ,
                lista
                ->
                info
                .
                preco
            );





            puts
            (
                ""
            );







            lista
                =
                    lista
                    ->
                    prox
                    ;





            countLista
            ++;




        }







        puts
        (
            "----------------------------------------------------"
        );





        printf
        (
            "Quantidade de instrumentos: %d            \n\n            "
            ,
            countLista
        );




    }




}




//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    typedef struct Livro
//    {
//        int ano;
//        char nome[30];
//        char autor[30];
//        int numPag;
//    } book;
//
//    int qtdlivro;
//    printf("Informe a quantidade de livros que deseja informar: \n");
//    scanf("%d", &qtdlivro);
//    book *d;
//    d = malloc(qtdlivro * sizeof(book));
//    struct Livro biblioteca[qtdlivro];
//    int i;
//    for (i = 0; i < qtdlivro; i++)
//    {
//        printf("\n");
//        printf("Informe o ano do livro: ");
//        scanf("%d", &biblioteca[i].ano);
//        printf("\n");
//        printf("Informe o nome do livro: ");
//        scanf("%s", &biblioteca[i].nome);
//        printf("\n");
//        printf("Informe o autor: ");
//        scanf("%s", &biblioteca[i].autor);
//        printf("\n");
//        printf("Informe o numero de paginas do livro: ");
//        scanf("%d", &biblioteca[i].numPag);
//        printf("\n---------------------------------------------------\n");
//    }
//    for (i = 0; i < qtdlivro; i++)
//    {
//        printf("\nO Livro do ano de %d, entitulado '%s', do autor %s, possui %d paginas", biblioteca[i].ano, biblioteca[i].nome, biblioteca[i].autor, biblioteca[i].numPag);
//    }
//}
//
//
////#include <stdio.h>#include <stdlib.h>
////struct Filme
////{
////    int ano;
////    char nome[30];
////    char categoria[30];
////    int tempo;
////};
////int main()
////{
////    int i, quantidadeDeFilmes;
////    printf("\nQuantidade de filmes: ");
////    scanf("%d", &quantidadeDeFilmes);
////    struct Filme *filmes = (struct Filme*) malloc(quantidadeDeFilmes*sizeof(struct Filme));
////    for(i = 1; i <= quantidadeDeFilmes; i++)
////    {
////        printf("\nFilme numero [%d]: ", i);
////        printf("\nDigite o ano do filme: ");
////        scanf("%d", &filmes[i].ano);
////        fflush(stdin);
////        printf("\nDigite o nome do filme: ");
////        gets(filmes[i].nome);
////        fflush(stdin);
////        printf("\nDigite a categoria do filme: ");
////        gets(filmes[i].categoria);
////        fflush(stdin);
////        printf("\nDigite o tempo do filme em minutos: ");
////        scanf("%d", &filmes[i].tempo);
////        fflush(stdin);
////    }
////    for(i = 1; i <= quantidadeDeFilmes; i++)
////    {
////        printf("\nFilme numero [%d]: ", i);
////        printf("\nAno: %d.", filmes[i].ano);
////        printf("\nNome: %s.", filmes[i].nome);
////        printf("\nCategoria: %s", filmes[i].categoria);
////        printf("\nTempo de filme: %d minutos.", filmes[i].tempo);
////    }
////}
