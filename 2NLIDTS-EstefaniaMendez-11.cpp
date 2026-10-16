#include <iostream>
using namespace std;

int sumaRecursiva(int n)
{
    if (n <= 9)
    {
        return n;
    }
    else
    {
        int ultimoDigito = n % 10;
        int residuo= n / 10;
        return ultimoDigito + sumaRecursiva(residuo);
    }
}

int sumaIterativa(int n)
{
    int suma = 0;
    while (n > 9)
    {
        suma += n % 10;
        n /= 10;
    }
    return suma + n;
}

int main()
{
    int cantidad, n;
    cout << "¿Cuantos numeros va a ingresar? ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> n;
        cout << "Suma recursiva: " << sumaRecursiva(n) << endl;
        cout << "Suma iterativa: " << sumaIterativa(n) << endl;

    }
    return 0;
}