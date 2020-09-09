#include <stdio.h>
#include "Ponto.h"

int main(){

    Ponto* ponto1 = cria(10, 20);
    Ponto* ponto2 = cria(25, 10);
    Ponto* ponto3 = cria(-10, -20);
    Ponto* ponto4 = cria(100, 210);
    Ponto* ponto5 = cria(-9, -1245);

    printf("ponto 1: x=%f & y=%f \n", ponto1->x, ponto1->y);
    printf("ponto 2: x=%f & y=%f \n", ponto2->x, ponto2->y);
    printf("ponto 3: x=%f & y=%f \n", ponto3->x, ponto3->y);
    printf("ponto 4: x=%f & y=%f \n", ponto4->x, ponto4->y);
    printf("ponto 5: x=%f & y=%f \n", ponto5->x, ponto5->y);

}