#include <iostream>
using namespace std;


int** c_matriz (int tamano ){

    int centro,contador = 1,i,j;
    int **matriz = new int*[tamano];

    switch(tamano){

        case 3: centro = 1; break;
        case 5: centro = 2; break;
        case 7: centro = 3; break;
        case 9: centro = 4; break;
        case 11: centro = 5; break;
        case 13: centro = 6; break;

    }

    for(int i = 0; i < tamano; ++i) {

        matriz[i] = new int[tamano];
    }

    for (i = 0; i < tamano; ++i){

        for (j = 0; j < tamano; ++j){
            if (i == centro && j == centro){

                matriz[i][j] = 0;



            }
            else{

                matriz[i][j] = contador;
                contador = contador + 1;



            }


        }

    }
    return matriz;



}


void r_matriz (int** matriz, int n ) {

    for (int i = 0; i < n / 2; i++) {

        for (int j = i; j < n - i - 1; j++) {

            // Almacena el valor actual
            int temp = matriz[i][j];
            
            // Mueve valores de la derecha a la parte superior
            matriz[i][j] = matriz[j][n - 1 - i];
            
            // Mueve valores de abajo a la derecha
            matriz[j][n - 1 - i] = matriz[n - 1 - i][n - 1 - j];
            
            // Mueve valores de la izquierda a la parte inferior
            matriz[n - 1 - i][n - 1 - j] = matriz[n - 1 - j][i];
            
            // Asignar temp a la izquierda
            matriz[n - 1 - j][i] = temp;


        }

    }
}


void p_matriz (int** matrix, int n){

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j) {

            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
}


void l_matriz(int**& matriz, int n) {

    for (int i = 0; i < n ; ++i) {

        delete[] matriz[i];
    }

    delete[] matriz;

    matriz = nullptr;
}


int** conv_matriz(int** matrizOriginal,int& valores){

    // Tomo una matriz de punteros de tamaño n, la elimino y creo una nueva con un tamaño 2n+1 diferente de n

    int tamano = 0;

    l_matriz(matrizOriginal,valores);

    switch(valores){

    case 3:
        tamano = 5;
        valores = tamano;

        break;

    case 5:
        tamano = 9;
        valores = tamano;

        break;

    case 7:
        tamano = 11;
        valores = tamano;

        break;

    case 9:
        tamano = 13;
        valores = tamano;

        break;

    default:
        tamano = (2*valores)+1;
        valores = tamano;

    }

    int** nueva_m = c_matriz(tamano);



    return nueva_m;

}
