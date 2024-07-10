#include <iostream> 
#include <locale.h> 


using namespace std;

int main() {
   
    setlocale(LC_ALL, "Portuguese");

    int valor, duzentos, cem, cinquenta, vinte, dez, cinco, dois, resto;

    cout << "Digite o valor a ser sacado (entre 2 e 2000): \n";
    cin >> valor;

    if (valor < 2 || valor > 2000) {
        cout << "Valor inválido!\n";
    } else {
        duzentos = valor / 200; 
        valor -= duzentos * 200; 

        cem = valor / 100; 
        valor -= cem * 100; 

        cinquenta = valor / 50; 
        valor -= cinquenta * 50; 

        vinte = valor / 20; 
        valor -= vinte * 20; 

        dez = valor / 10; 
        valor -= dez * 10; 

        cinco = valor / 5; 
        valor -= cinco * 5; 

        dois = valor / 2; 
        valor -= dois * 2; 

        resto = valor; 

        if (resto >= 1) {
            cout << "Valor inválido!\n";
        } else {
            if (duzentos > 0) {
                cout << "Nota(s) de 200: " << duzentos << "\n";
            }

            if (cem > 0) {
                cout << "Nota(s) de 100: " << cem << "\n";
            }

            if (cinquenta > 0) {
                cout << "Nota(s) de 50: " << cinquenta << "\n";
            }

            if (vinte > 0) {
                cout << "Nota(s) de 20: " << vinte << "\n";
            }

            if (dez > 0) {
                cout << "Nota(s) de 10: " << dez << "\n";
            }

            if (cinco > 0) {
                cout << "Nota(s) de 5: " << cinco << "\n";
            }

            if (dois > 0) {
                cout << "Nota(s) de 2: " << dois << "\n";
            }
        }
    }

    system("pause");

    return 0;
}

