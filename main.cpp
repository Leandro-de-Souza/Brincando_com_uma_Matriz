#include <bits/stdc++.h>

using namespace std;

int main()
{

       int N, linha, coluna;
       double somaposi;

       cout << "Qual a ordem da matriz? ";
       cin >> N;

       double mat[N][N];

       for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                 cout << "Elemento [" << i << "," << j << "]: ";
                 cin >> mat[i][j];
            }
       }

       somaposi = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (mat[i][j] > 0) {
                    somaposi = somaposi + mat[i][j];
                }
            }
        }

        cout << endl << "SOMA DOS POSITIVOS: " << somaposi << endl << endl;

        cout << "Escolha uma linha: ";
        cin >> linha;

        cout << "LINHA ESCOLHIDA: ";
        for (int j = 0; j < N; j++) {
             cout << fixed << setprecision(1);
             cout << mat[linha][j] << " ";
        }

        cout << endl;
        cout << endl << "Escolha uma coluna: ";
        cin >> coluna;

        cout << "COLUNA ESCOLHIDA: ";
        for (int i = 0; i < N; i++) {
             cout << fixed << setprecision(1);
             cout << mat[i][coluna] << " ";
        }

        cout << endl;
        cout << endl << "DIAGONAL PRINCIPAL: ";
        for (int i = 0; i < N; i++) {
             cout << fixed << setprecision(1);
             cout << mat[i][i] << " ";
        }

        cout << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                 if (mat[i][j] < 0) {
                    mat[i][j] = mat[i][j] * mat[i][j];
                 }
            }
       }

       cout << endl << "MATRIZ ALTERADA:" << endl;

       for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                 cout << fixed << setprecision(1);
                 cout << mat[i][j] << " ";
            }
            cout << endl;
       }


    return 0;
}
