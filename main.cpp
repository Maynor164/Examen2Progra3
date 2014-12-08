#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

//2 ejercicios a realizar estan ubicados en el archivo Lista.h

//Devuelve el promedio de los valores de mi_lista dada
float obtenerPromedio(std::list<float> mi_lista)
{
return 1.0f;
}

//Devuelve la suma de los valres de mi_vector dada
int obtenerSuma(std::vector<int> mi_vector)
{
//http://www.lawebdelprogramador.com/foros/Dev-C/367639-suma_de_2_vectores.html
    int suma = 0;
    for(int i=0;i<mi_vector.size();++i) {
    suma += mi_vector[i];
    }
    return suma;

}

//Devuelve verdadero si encuentra cadena (dada) en el archivo con nombre nombre_archivo (dado), de lo contrario devuelve false
bool existeEnArchivo(string nombre_archivo, string cadena)
{
ifstream in(nombre_archivo.c_str());
string contador;
    int cant=nombre_archivo.size();

    for(int i=0;i < cant;i++)
    {
        in>>contador;
        if(contador == cadena)
        {
            return true;
        }
    }
    return false;

}


//Devuelve devuelve el tamano en bytes del archivo con nombre nombre_archivo (dado)
int obtenerTamanoDeArchivo(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    in.seekg(0,ios::end);
    int tamano = in.tellg();
    in.seekg(0,ios::beg);
    return tamano;

}

//Devuelve true si encuentra el valor num (dado) en el arbol dada su raiz
bool existeEnArbol(NodoTrinario* raiz, int num)
{
    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
