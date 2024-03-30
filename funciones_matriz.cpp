#include <iostream>
using namespace std;


void c_matriz (int tamano ){

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
                cout << matriz [i][j] << " ";

            }
            else{

                matriz[i][j] = contador;
                contador = contador + 1;
                cout << matriz[i][j] << " ";

            }


        }
        cout << endl;
    }

    for(int i = 0; i < tamano; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;


}

void r_matriz (int** matrix, int tamano){

    int** rot = new int*[tamano];
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {

            rot[tamano - j - 1][i] = matrix[i][j];
            cout << rot[i][j]<<" ";
        }
        cout << endl ;
    }

    for ( int i = 0; i < tamano; ++i){
        for ( int j = 0; j < tamano; ++j){
            delete[] rot[i];
        }
    }
    delete[] rot;
}
