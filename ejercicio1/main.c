#include <stdio.h>
#include <stdlib.h>
#include"../Librerias/pila.h"
#include<conio.h>
#define ESC 27

/// Hacer una función que permita ingresar varios elementos a una pila, tanto como quiera el usuario.

void cargar_pila(Pila* c);
int main()
{
    system("COLOR B");
Pila dada;
inicpila(&dada);


cargar_pila(&dada);

    return 0;
}

void cargar_pila(Pila* c){
char o=0;
while(o!=27){
    leer(c);
    printf("si desea salir presione ESCAPE sino cualquier tecla para continuar\n");
    o=getch();

}
mostrar(c);


}
