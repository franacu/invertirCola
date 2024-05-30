//
// Created by Fran on 30/05/2024.
//
#include "stdio.h"
#include "helper.h"
#include "stdlib.h"
Nodo *newNodo(int num)
{
    Nodo *aux= malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Error\n");
        exit(-1);
    }else
        {
            aux->num=num;
            aux->sig=NULL;
        }
    return aux;
}
Cola *newCola()
{
    Cola *aux= malloc(sizeof(Cola));
    if(aux==NULL)
    {
        printf("Error\n");
        exit(-1);
    }else
    {
        aux->cola=NULL;
        aux->cab=NULL;
    }
    return aux;
}
Pila *newPila()
{
    Pila *aux= malloc(sizeof(Pila));
    if(aux==NULL)
    {
        printf("Error\n");
        exit(-1);
    }else
    {
        aux->tope=NULL;
    }
    return aux;
}
void Enque(Cola *cola,Nodo *nodoAI)
{
    if(cola->cab==NULL)
    {
        cola->cab=nodoAI;
        cola->cola=nodoAI;
    }else
        {
            cola->cola->sig=nodoAI;
            cola->cola=nodoAI;
        }
}

Nodo *Deque(Cola *cola)
{
    if(cola->cab==NULL)
    {
        printf("Cola vacia\n");
    }
    Nodo *nodoOut=cola->cab;
    cola->cab=nodoOut->sig;
    nodoOut->sig=NULL;
    return nodoOut;
}
void pushPila(Nodo *nodoOut,Pila *pila)
{
    if(pila->tope==NULL)
    {
        pila->tope=nodoOut;
    }else
        {
            nodoOut->sig=pila->tope;
            pila->tope=nodoOut;
        }
}
Nodo *popPila(Pila *pila)
{
    Nodo *nodoOut=pila->tope;
    pila->tope=nodoOut->sig;
    nodoOut->sig=NULL;
    return nodoOut;
}
void Enque1(Cola *cola, Nodo *nodoOut)
{
    if(cola->cab==NULL)
    {
        cola->cab=nodoOut;
        cola->cola=nodoOut;
    }else
        {
            cola->cola->sig=nodoOut;
            cola->cola=nodoOut;
        }
}
void imprimirCola(Cola *cola)
{
    Nodo *aux=cola->cab;
    printf("\nCola:\n");
    while (aux!=NULL)
    {
        printf("%d--> ",aux->num);
        aux=aux->sig;
    }
}
void imprimirPila(Pila *pila)
{
    Nodo *aux=pila->tope;
    printf("\nPila:\n");
    while (aux!=NULL)
    {
        printf("%d--> ",aux->num);
        aux=aux->sig;
    }
}