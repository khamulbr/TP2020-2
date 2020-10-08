#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>
#include <locale.h>

int razao(int *n1, int *n2){
if (*n1 % *n2 == 0)
    return 1;
else
    return 0;
}

int main(void){
setlocale(LC_ALL,"Portuguese");
 int V1 = 0, V2 = 0;
 int result;

printf("Entre com o valor 1: ");
scanf("%d", &V1);

printf("Entre com o valor 2: ");
scanf("%d", &V2);

result = razao(&V1, &V2);

 if (result == 1)

             printf("\nOperação foi possível!\n\n");

 else

             printf("\nOperação não foi possível!\n");

return 0; }
