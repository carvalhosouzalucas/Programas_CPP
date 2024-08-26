#include <iostream>

int num1, num2, resultado;
char op;
char continuar;

int main()
{
    do
    {
        std::cout << "Digite o primeiro número: " << std::endl;
        std::cin >> num1;
        
        std::cout << "Digite a operação (+, -, *, /): " << std::endl;
        std::cin >> op;
        
        std::cout << "Digite o segundo número: " << std::endl;
        std::cin >> num2;
        
        switch (op)
        {
            case '+':
                resultado = num1 + num2;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
        
            case '-':
                resultado = num1 - num2;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
        
            case '*':
                resultado = num1 * num2;
                std::cout << "Resultado: " << resultado << std::endl;
                break;
        
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                    std::cout << "Resultado: " << resultado << std::endl;
                } else {
                    std::cout << "Erro: Divisão por zero!" << std::endl;
                }
                break;
        
            default:
                std::cout << "Operação inválida!" << std::endl;
                break;
        }
        
        std::cout << "Deseja realizar outra operação? (s/n): " << std::endl;
        std::cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}

