#include <stdio.h>

void incrementa(int *valor) {
                //        x         valor     y  
                //  [ ] [10] [ ] [0061FF1C] [43]
    printf("o endereco de valor eh: %p\n", valor);

    *valor = *valor + 1;
}

int main(){
                //        x   
    int x = 43; //  [ ] [43] [ ] [ ] [ ]
                //        x           y
    int y = x;  //  [ ] [43] [ ] [ ] [43]
                //        x           y
    x = 10;     //  [ ] [10] [ ] [ ] [43]
    printf("o endereco de x eh: %p\n", &x);
    printf("o endereco de y eh: %p\n", &y);

    printf("o valor de x eh = %d\n", x);
    incrementa(&x);
                //        x           y  
                //  [ ] [11] [ ] [] [43]
    printf("o valor de x eh = %d\n", x);

}