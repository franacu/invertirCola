//
// Created by Fran on 30/05/2024.
//

#ifndef EJ20_GUIA2_HELPER_H
#define EJ20_GUIA2_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo *sig;
}Nodo;
typedef struct pila
{
    Nodo *tope;
}Pila;
typedef struct cola
{
    Nodo *cab;
    Nodo *cola;
}Cola;
Nodo *newNodo(int num);
Pila *newPila();
Cola *newCola();
void Enque(Cola *cola,Nodo *nodoAI);
Nodo *Deque(Cola *cola);
void pushPila(Nodo *nodoOut,Pila *pila);
Nodo *popPila(Pila *pila);
void Enque1(Cola *cola, Nodo *nodoOut);
void imprimirCola(Cola *cola);
void imprimirPila(Pila *pila);
#endif //EJ20_GUIA2_HELPER_H
