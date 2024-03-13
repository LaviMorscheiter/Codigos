#include <iostream>

using namespace std;

bool Fibonacci(int num)
{
    int n1 = 0, n2 = 1, n3 = 0;
    
    while (n3 < num)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    
    if (n3 == num)
        return true;
    else
        return false;
}

int main()
{
    int num;
    
    cout << "Digite um numero: ";
    cin >> num;
    
    if (Fibonacci(num))
        cout << "O numero pertence a sequencia de Fibonacci." << endl;
    else
        cout << "O numero nao pertence a sequencia de Fibonacci." << endl;
    
    return 0;
}