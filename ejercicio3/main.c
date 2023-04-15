#include <stdio.h>
#include <stdlib.h>
#include"../Librerias/pila.h"
#include<conio.h>
#define ESC 27

///3. Hacer una función que pase todos los elementos de una pila a otra, pero conservando el orden.

void cargar_pila(Pila* c);
void pasar_elementos_ordenados(Pila* c);



int main()
{
system("COLOR B");
Pila dada;
inicpila(&dada);

cargar_pila(&dada);
pasar_elementos_ordenados(&dada);
    return 0;
}


void cargar_pila(Pila* c){
char o=0;


while(o!=27){
    leer(c);
    printf("Si desea salir presione ESCAPE sino cualquier tecla para continuar \n");
    fflush(stdin);
    o=getch();

}
mostrar(c);

}

void pasar_elementos_ordenados(Pila* c){

Pila aux;
inicpila(&aux);

while(!pilavacia(c)){
apilar(&aux,desapilar(c));

}
while(!pilavacia(&aux)){

    apilar(c,desapilar(&aux));
}
mostrar(c);

}
