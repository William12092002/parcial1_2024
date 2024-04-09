#ifndef FUNCIONES_H
#define FUNCIONES_H
#endif // FUNCIONES_H

#include <iostream>
using namespace std;



int numM ( std::string);
int** c_matriz(int);
void r_matriz (int** matrix, int N);
void p_matriz (int** matrix, int n);
void l_matriz(int**& matriz, int n);
int** conv_matriz(int** matrizOriginal,int & valores);
int fila (string clave);
int columna (string clave);
bool comp_m (int** M1, int** M2, int tamano_m,int tamano_m2, int criterio, string clave);
void p_tamano(int* arreglo, int longitud);
