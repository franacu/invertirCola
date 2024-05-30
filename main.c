
#include "helper.h"
int main()
{

    Pila *pila=newPila();
    Cola *cola=newCola();

    Enque(cola,newNodo(4));
    Enque(cola,newNodo(3));
    Enque(cola,newNodo(2));
    Enque(cola,newNodo(1));

    imprimirCola(cola);

    pushPila(Deque(cola),pila);
    pushPila(Deque(cola),pila);
    pushPila(Deque(cola),pila);
    pushPila(Deque(cola),pila);

    imprimirPila(pila);

    Enque1(cola,popPila(pila));
    Enque1(cola,popPila(pila));
    Enque1(cola,popPila(pila));
    Enque1(cola,popPila(pila));

    imprimirCola(cola);


    return 0;
}
