#include <stdio.h>
#include <stdlib.h>
#include"../../Funciones/Librerias/pila.h"
#include<conio.h>
#define ESC 27

void cargar_pila(Pila* c);
int  sumar_elementos(Pila c);
int contar_elementos(Pila c);
float promedio(Pila c);

int main()
{
      system("COLOR B");


    Pila A;

    inicpila(&A);

    cargar_pila(&A);


    printf("%.2f",promedio(A));

    return 0;
}

///CARGA DE PILA
void cargar_pila(Pila* c)
{

    char o=0;
    while(o!=27)
    {

        leer(c);
        printf("Si desea salir presione escape sino cualquier tecla para continuar \n");
        o=getch();


    }
    mostrar(c);
}


///SUMAR ELEMENTOS
int  sumar_elementos(Pila c)
{

    int suma=0;



    while(!pilavacia(&c))
    {
        suma += tope(&c);
        desapilar(&c);


    }

    return suma;

}
///CONTAR ELEMENTOS
int contar_elementos(Pila c)
{
    int i=0;


    while(!pilavacia(&c))
    {

        desapilar(&c);

        i++;

    }
    return i;
}

///Promedio

float promedio(Pila c){


return (float)(sumar_elementos(c)/contar_elementos(c));


}






