#include <iostream>

#include <funciones.h>

using namespace std;

int main(){

    string clave = "";
    int tamano = 1;
    int taux = 0;
    int filas = 0, columnas = 0;
    bool compa = false;


    cout <<"---------------------------------------------------------"<<endl;
    cout << "Bienvenido a informa2, comprometidos con tu seguridad "<<endl;
    cout <<"---------------------------------------------------------"<<endl<<endl<<endl;

    cout << "Dame una clave para ver si puedo encontrar una cerradura";
    cin  >> clave;

    //La funcion numM toma la clave y retorna el numero de matrices
    int nm = numM(clave);

    //Creo un arreglo de matrices para guardar las mismas, y un arreglo dinamico de punteros para guardar tamaños
    int* valores = new int[nm];
    int*** arregloDeMatrices = new int**[nm];

    filas = fila(clave);
    columnas = columna(clave);

    if (columnas < filas){
        tamano = filas;
    }
    else if ( columnas > filas){
        tamano = columnas;
    }
    else if ( columnas == 0 && filas ==0){
        tamano = columnas +1;
    }
    else if (columnas == filas){
        tamano = filas;

    }




    for (int i = 0; i < nm; ++i) {

        taux = (2*tamano)+1;
        valores[i] = taux;
        tamano = tamano + 1;
        arregloDeMatrices[i] = c_matriz(taux);

    }

    for (int i = 0; i <(nm-1); i++){

        compa = comp_m(arregloDeMatrices[i],arregloDeMatrices[i+1],valores[i],valores[i+1],clave[2+i],clave);

        if (compa == false){

            cout <<"no se puede :C";
            break;
        }
        else if (compa == true){

            if (i == (nm-2)){
                p_tamano(valores,nm);
            }
        }

    }








    for (int i = 0; i < nm; ++i){

        for (int j = 0; j<valores[i]; ++j){

            delete[] arregloDeMatrices[i][j];
        }

        delete [] arregloDeMatrices[i];

    }

    delete[] arregloDeMatrices;
    delete[] valores;




    


    




    return 0;
}
