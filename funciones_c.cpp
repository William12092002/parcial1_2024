#include <string>
using namespace std;

int numM (string clave){

    // recibe un string clave y retorna
    // la cantidad de matrices de la cerradura

    int valor ;
    valor = (clave.length() - 2) + 1;

    return valor;


}
