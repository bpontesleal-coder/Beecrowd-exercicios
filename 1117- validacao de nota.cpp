#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double nota, soma=0;
    int contador=0;
    
    while (contador < 2){
        cin >> nota;

        if (nota >= 0 && nota <= 10) {
            soma += nota;
            contador++;
        } else {
            cout << "nota invalida" << endl;
        }
    }

    cout << fixed << setprecision(2);
    cout << "media = " << soma / 2 << endl;

    return 0;
}
