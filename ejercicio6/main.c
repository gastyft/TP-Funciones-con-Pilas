#include <stdio.h>
#include <stdlib.h>
#include"../Librerias/pila.h"
#include <conio.h>
#define ESC 27


/**
Hacer una función que inserta en una pila ordenada un nuevo elemento, conservando el orden de ésta.
*/

void cargar_pila(Pila*c);
void insertar_elemento(Pila*p);

int main()
{
    system("COLOR B");
    Pila dada;
    inicpila(&dada);
cargar_pila(&dada);
mostrar(&dada);
system("pause");

insertar_elemento(&dada);
mostrar(&dada);
    return 0;
}

void cargar_pila(Pila*c){
char o=0;

while(o!=27){
    leer(c);
    printf("Para salir presione ESCAPE sino cualquier tecla para continuar \n");
    fflush(stdin);
    o=getch();
}
}

void insertar_elemento(Pila*p){

    int num, flag;
    Pila aux1;

    inicpila(&aux1);
    printf("\n Ingrese elemento a insertar \n");
    scanf("%d",&num);

    flag=0;

    while(!pilavacia(p) ){
            while(flag==0){
            if(num > tope(p)){

                apilar(p,num);
                flag=1;


            }
            else{
                apilar(&aux1,desapilar(p));
                flag=0;
            }
            }
            apilar(&aux1,desapilar(p));
    }



        while(!pilavacia(&aux1)){
                apilar(p,desapilar(&aux1));
            }
}

