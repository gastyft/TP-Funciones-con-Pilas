#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include<conio.h>
#define ESC 27


///Hacer una función que pase todos los elementos de una pila a otra.

void cargar_pila(Pila* c);
void pasar_elementos(Pila* c);
int main()
{
    system("COLOR B");
Pila dada;
inicpila(&dada);


cargar_pila(&dada);

pasar_elementos(&dada);

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



void pasar_elementos(Pila* c)
{
    Pila aux;
    inicpila(&aux);
    while(!pilavacia(c)){
        apilar(&aux,desapilar(c));

    }
    mostrar(&aux);


}
