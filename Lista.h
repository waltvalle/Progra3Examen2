#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"
using namespace std;


template <typename Tipo>
class Lista
{
public:
    Nodo<Tipo>* inicio;

    Lista()
    {
        inicio = NULL;
    }

    void imprimir()
    {
        for(Nodo<Tipo>* temp = inicio;
            temp!=NULL;
            temp = temp->sig)
        {
            cout<<temp->num<<endl;
        }
    }

    void agregarAlInicio(Tipo valor_nuevo)
    {
        Nodo<Tipo> *nuevo = new Nodo<Tipo>(valor_nuevo);

        if(inicio == NULL)
        {
            inicio = nuevo;
        }else
        {
            nuevo->sig = inicio;
            inicio = nuevo;
        }
    }

    void agregarAlFinal(Tipo valor_nuevo)
    {
        Nodo<Tipo> *nuevo = new Nodo<Tipo>(valor_nuevo);

        if(inicio == NULL)
        {
            inicio = nuevo;
        }else
        {
            Nodo<Tipo>*temp = inicio;
            while(temp->sig!=NULL)
            {
                temp=temp->sig;
            }
            temp->sig = nuevo;
        }
    }

    void borrar(Tipo valor_a_borrar)
    {
        if(inicio->num == valor_a_borrar)
        {
            Nodo<Tipo>* borrar = inicio;
            inicio = inicio->sig;
            delete borrar;
        }else
        {
            Nodo<Tipo>* temp = inicio;
            while(temp->sig->num!=valor_a_borrar)
            {
                temp=temp->sig;
                if(temp->sig==NULL)
                    return;
            }
            Nodo<Tipo>* borrar = temp->sig;
            temp->sig = temp->sig->sig;
            delete temp->sig;
        }
    }

    //Devuelve la cantidad de valores o nodos que existen en la lista
    int contarValores()
    {
    int cantidad=0;
    //se crean dos variables, la primera que sera de cantidad y la segunda una variable temporal con valor null
    Nodo<Tipo>*temporal= NULL;
    //el for recorre el nodo
    for(temporal=inicio;
        temporal!=NULL;
        temporal=temporal->sig)
        {
            //por cada recorrido se le suma 1 a cantidad
            ++cantidad;
        }
        //por ultimo se devuelve lo que contenga cantidad una vez se recorrio el nodo
        return cantidad;
    }


    //Asumiendo que los valores de lista son enteros naturales
    //Devuelve true si todos los valores de la lista son pares, de lo contrario devuelve false
    bool sonPares()
    {
        int par=0;
        Nodo<Tipo>*temporal= NULL;
        for(temporal=inicio;
            temporal!=NULL;
            temporal=temporal->sig)
            {
                if(par%2==0)
                    return true;
            else
                return false;
            }
//            if(par%2==0)
//                    return true;
//            else
//                return false;
    }
};
#endif // LISTA_H
