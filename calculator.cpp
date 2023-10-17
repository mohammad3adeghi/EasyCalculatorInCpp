#include <iostream>

using namespace std;

int main()
{
    int a,b;
    std::cout << "Enter Tow Operands";
    std::cin >> a >> b;

    char oper;
    std::cout << "Enter The Operator";
    std::cin >> oper;

    switch (oper) {
        case '+':
            std::cout << a + b;
            break;
        case '-':
            std::cout << a + b;
            break;
        case '*':
            std::cout << a + b;
            break;
        case '/':
            std::cout << a + b;
            break;
        default:
            std::cout << "Error";
    }
}