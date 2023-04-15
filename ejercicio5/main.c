#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include<conio.h>
#define ESC 27


///Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.
///Usar la función del ejercicio 4. (Ordenamiento por selección)

void ordenamiento(Pila*c);
void cargar_pila(Pila*c);

int main()
{
    Pila dada;
    inicpila(&dada);
    system("COLOR B");
cargar_pila(&dada);
ordenamiento(&dada);

    return 0;
}
///ordenamiento
void ordenamiento(Pila*c){

Pila aux,aux1,ordenada;
inicpila(&aux);
inicpila(&aux1);
inicpila(&ordenada);

while(!pilavacia(c)){
    apilar(&aux,desapilar(c));

    while(!pilavacia(c)) ///compara los valores buscando el menor
    {

        if(tope(c)<tope(&aux))
        {
            apilar(&aux1,desapilar(&aux));
            apilar(&aux,desapilar(c));
        }
        else
        {
            apilar(&aux1,desapilar(c));

        }

        }
          apilar(&ordenada,desapilar(&aux));

    while(!pilavacia(&aux1)){
        apilar(c,desapilar(&aux1));
    }

        }


mostrar(&ordenada);
}



/// cargar pila
void cargar_pila(Pila*c){
char o=0;

while(o!=27){
    leer(c);
    printf("Si desea salir presione ESCAPE sino cualquier tecla para continuar \n");
    fflush(stdin);
    o=getch();
}
mostrar(c);

}
