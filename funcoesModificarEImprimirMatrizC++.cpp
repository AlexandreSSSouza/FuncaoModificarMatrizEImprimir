#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 30;
void lerMatriz(int m[][MAX], int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> m[i][j];
        }
    }
}
void modificarMatriz(int m[][MAX], int l, int c){
    for(int p = 0; p < l; p++){
        for(int q = 0; q < c; q++){
            if(p != q && p > q){
                m[p][q] = 0;
            }
            else if(p != q && p < q){
                m[p][q] = 1;
            }
        }
    }
}
void imprimirMatriz(int m[][MAX], int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cout << m[i][j];
            cout << " ";
        }
        cout << endl;
    }
}


int main()
{
    int mat[MAX][MAX];
    int n = 0;
    cin >> n;
    lerMatriz(mat, n, n);
    modificarMatriz(mat, n, n);
    imprimirMatriz(mat, n, n);

    return 0;
}
