#include <iostream>
using namespace std;

int main() {
    string s;

    while(getline(cin, s)) {
        bool maiuscula = true;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] != ' ') {

                if(maiuscula) {
                    // transforma em MAIÚSCULA
                    if(s[i] >= 'a' && s[i] <= 'z')
                        s[i] = s[i] - 32;
                } else {
                    // transforma em minúscula
                    if(s[i] >= 'A' && s[i] <= 'Z')
                        s[i] = s[i] + 32;
                }

                maiuscula = !maiuscula;
            }
        }

        cout << s << endl;
    }
}
