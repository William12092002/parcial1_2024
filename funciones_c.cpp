#include <string>
#include <funciones.h>
#include <iostream>
using namespace std;

int numM (string clave){

    // recibe un string clave y retorna
    // la cantidad de matrices de la cerradura

    int valor = 0 ;
    valor = (clave.length() - 2) + 1;

    return valor;


}

int fila (string clave){

    string c = clave;
    int fil = c[0] - '0';

    return fil;
}

int columna (string clave){

    string c = clave;
    int col = c[1] - '0';

    return col;
}

bool comp_m (int** M1, int** M2, int tamano_m,int tamano_m2, int criterio, string clave){

    int fil = fila(clave);
    int col = columna(clave);
    int contador = 0;

     int n = criterio;

     switch(n){

     case 49:




        while (contador < 3){

             if (M1[fil][col] > M2[fil][col]){

                 return true;
             }
             else{

                 for(int i = 0; i < 3; i++){

                     r_matriz(M2,tamano_m2);

                     if (M1[fil][col] > M2[fil][col]){

                         return true;
                         break;
                     }
                 }

                 M1 = conv_matriz(M1,tamano_m);
             }
             contador++;

        }
        if (contador == 3){
            return false;
        }




        break;

     case 48:



         while (contador < 3){

             if (M1[fil][col] == M2[fil][col]){

                 return true;
             }
             else{

                 for(int i = 0; i < 3; i++){

                     r_matriz(M2,tamano_m2);

                     if (M1[fil][col] == M2[fil][col]){

                         return true;
                         break;
                     }
                 }

                 M1 = conv_matriz(M1,tamano_m);
                 M2 = conv_matriz(M2,tamano_m2);
             }
             contador++;

         }
         if (contador == 3){
             return false;
         }



         break;

    case 45 :


        while (contador < 3){

            if (M1[fil][col] < M2[fil][col]){

                return true;
            }
            else{

                for(int i = 0; i < 3; i++){

                    r_matriz(M2,tamano_m2);

                    if (M1[fil][col] < M2[fil][col]){

                        return true;
                        break;
                    }
                }

                M1 = conv_matriz(M1,tamano_m);
            }
            contador++;

        }
        if (contador == 3){
            return false;

        }



        break;

    default:
        cout <<"";

    }

}

void p_tamano(int* arreglo, int longitud) {

    for (int i = 0; i < longitud; ++i) {

        cout << "Matriz " << i << ": " <<"tamano "<< arreglo[i] << endl;
    }
}
