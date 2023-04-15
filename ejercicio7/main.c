#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include <conio.h>
#define ESC 27

/**
 Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada.
 Usar la función del ejercicio 6.  (Ordenamiento por inserción)
*/



void cargar_pila(Pila*c);
void acomodar_elemento(Pila*c,Pila*orde);
int main()
{
    Pila dada,ordenada;
    inicpila(&dada);
    inicpila(&ordenada);
    system("COLOR B");
    cargar_pila(&dada);
    acomodar_elemento(&dada,&ordenada);
    mostrar(&ordenada);

    return 0;
}

void cargar_pila(Pila*c)
{
    char o=0;

    while(o!=27)
    {
        leer(c);
        printf("Para salir presione ESCAPE sino cualquier tecla para continuar \n");
        fflush(stdin);
        o=getch();
    }
}

void acomodar_elemento(Pila*p,Pila*orde)
{


    Pila aux,aux1;
    inicpila(&aux);
    inicpila(&aux1);

    apilar(&aux,desapilar(p));
    mostrar(p);
    mostrar(&aux);


        while(!pilavacia(p))
        {
            while(!pilavacia(&aux)){
            if(tope(&aux)< tope(p))
            {
                 apilar(&aux1,desapilar(&aux));
                apilar(&aux,desapilar(p));


                }
            else
            {
                apilar(&aux1,desapilar(p));

            }
            apilar(&aux1,desapilar(p));

        }
        while(!pilavacia(&aux1)){
            apilar(p,desapilar(&aux1));
        }


        }
apilar(p,desapilar(&aux));
    while(!pilavacia(p))
    {
        apilar(orde,desapilar(p));
    }


    }











