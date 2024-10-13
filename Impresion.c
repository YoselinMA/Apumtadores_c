#include <stdio.h>

int main(){

    int x=17, y;
    //lo imprime por lo que trae en memoria dandole un valor de lo que la memoria tiene en basura
    //printf("El valor de x es: %d", x);
    int *p;
    //p es la direccion de la x (*)
    p = &x;
    //printf("El valor de x es: %d", x);
    y = *p + 3;
    printf("El valor de y es %d", y);
}
