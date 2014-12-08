#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <fstream>       // std::cin, std::cout
#include <stack>          // std::stack
#include "Lista.h"          // std::stack
#include "ArbolTrinario.h" // std::stack
#include <list>
#include <vector>
using namespace std;

void evaluar();

template <typename Tipo>
class Nodo;

template <typename Tipo>
class Lista;


float obtenerPromedio(std::list<float> mi_lista);
int obtenerSuma(std::vector<int> mi_vector);
bool existeEnArchivo(string nombre_archivo, string cadena);
int obtenerTamanoDeArchivo(string nombre_archivo);
bool existeEnArbol(NodoTrinario* raiz, int num);

#endif // EVALUADOR_H
