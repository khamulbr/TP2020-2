#include <stdio.h>

void incrementa(int valor) {
                //        x     valor  y  
                //  [ ] [10] [ ] [10] [43]

    valor = valor++;
    printf("valor incrementado = %d\n", valor);
}


int main(){
                //        x   
    int x = 43; //  [ ] [43] [ ] [ ] [ ]
                //        x           y
    int y = x;  //  [ ] [43] [ ] [ ] [43]
                //        x           y
    x = 10;     //  [ ] [10] [ ] [ ] [43]

    printf("o valor de x eh = %d\n", x);
    incrementa(x);
    printf("o valor de x eh = %d\n", x);

}