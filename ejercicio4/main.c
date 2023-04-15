#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include<conio.h>
#define ESC 27


///Hacer una función que encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila.


void cargar_pila(Pila*c);
int menor_elemento(Pila*c);

int main()
{
    system("COLOR B");
Pila dada;
inicpila(&dada);

cargar_pila(&dada);


printf("menor elemento es %d",menor_elemento(&dada));
mostrar(&dada);
    return 0;
}

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

int menor_elemento(Pila*c){

Pila aux,aux1;
inicpila(&aux1);
inicpila(&aux);

apilar(&aux,desapilar(c));

while(!pilavacia(c)){
    if(tope(c)>tope(&aux)){
    apilar(&aux1,desapilar(c));
    }
    else{
            apilar(&aux1,desapilar(&aux));
        apilar(&aux,desapilar(c));
    }

}
while(!pilavacia(&aux1)){

    apilar(c,desapilar(&aux1));
}

return tope(&aux);
}
