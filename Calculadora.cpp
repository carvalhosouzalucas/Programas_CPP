#include <iostream>

using namespace std;

int main() {
    int num1, num2, resultado = 0;
    char op;

    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;

    cout << "Digite uma das operações [+,-,/,*]" << endl;
    cin >> op;

    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    if (op == '+')
        resultado = num1 + num2;
    else if (op == '-')
        resultado = num1 - num2;
    else if (op == '/')
        resultado = num1 / num2;
    else if (op == '*')
        resultado = num1 * num2;
    else
        cout << "Operador inválido!" << endl;

    cout << num1 << " " << op << " " << num2 << " = " << resultado << endl;

    return 0;
}
