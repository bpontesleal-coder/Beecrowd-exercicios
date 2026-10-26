#include <iostream>
using namespace std;

// SUBROTINA
string vencedor(int m, int l) {
    if(m > l) return "Marcos";
    else if(l > m) return "Leonardo";
    else return "Empate";
}

int main() {
    int N;

    while(cin >> N) {
        int M, L;
        cin >> M >> L;

        int marcos[100][100];
        int leonardo[100][100];

        // Marcos
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                cin >> marcos[i][j];
            }
        }

        // Leonardo
        for(int i = 0; i < L; i++) {
            for(int j = 0; j < N; j++) {
                cin >> leonardo[i][j];
            }
        }

        int CM, CL, A;
        cin >> CM >> CL;
        cin >> A;

        int valorM = marcos[CM-1][A-1];
        int valorL = leonardo[CL-1][A-1];

        cout << vencedor(valorM, valorL) << endl;
    }

    return 0;
}
