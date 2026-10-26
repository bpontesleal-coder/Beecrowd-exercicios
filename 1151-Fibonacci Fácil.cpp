//A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.
#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    
    int a = 0, b = 1, c;

    for(int i = 0; i < N; i++){
        
        if(i == 0){
            cout << a;
        } else if(i == 1){
            cout << " " << b;
        } else {
            c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }

    cout << endl;

    return 0;
}
