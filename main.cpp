#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>
using namespace std;

//2 ejercicios a realizar estan ubicados en el archivo Lista.h

//Devuelve el promedio de los valres de mi_lista dada
float obtenerPromedio(std::list<float> mi_lista)
{

}

//Devuelve la suma de los valres de mi_vector dada
int obtenerSuma(std::vector<int> mi_vector)
{

    return -1;
}

//Devuelve verdadero si encuentra cadena (dada) en el archivo con nombre nombre_archivo (dado), de lo contrario devuelve false
bool existeEnArchivo(string nombre_archivo, string cadena)
{
    ifstream leer(nombre_archivo.c_str());
    int cant=0;
    //ifstream lee el archivo. La primera variable almacenara la cantidad, la sefunda sera un string vacio que usara despues
    string word;
    for(int i=0;i<cant;i++)
    {
        //leer apunta a lo que tenga word
        leer>>word;
        //si word es igual a lo que tenga cadena entonces devolvera true, de lo contrario sera falsa
        if(word == cadena)
        {
            return true;
        }
        return false;
    }
}
//Devuelve devuelve el tamano en bytes del archivo con nombre nombre_archivo (dado)
int obtenerTamanoDeArchivo(string nombre_archivo)
{
    //ifstream lee el archivo
    ifstream leer(nombre_archivo.c_str());
    //el seekg se posiciona al final del archivo
    leer.seekg(0,ios::end);
    //creo una variable que ocntendra el tamaño del archivo, obtenido mediante tellg
    int cant= leer.tellg();
    //se devuelve finalmente el valor de cantidad
    return cant;
}

//Devuelve true si encuentra el valor num (dado) en el arbol dada su raiz
bool existeEnArbol(NodoTrinario* raiz, int num)
{
//    raiz = root;
//    if(root==num)
//        return true;
//    else
    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
