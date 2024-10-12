#include <stdio.h>
int *p, y;
void func(){
    int x=40;
    p = &x;
    y = *p; //correcto
     *p = 23; //correcto
     }

int main(void)
{
    func();
    y = *p; //incorrecto
    *p = 25; //incorrecto

    printf("El valor de y es %d \nEl valor de *p es %d  \nEl valor de p es %p" , y, *p, p);
}
