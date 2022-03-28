#include <iostream>

int num1 = 2;
int num2 = 4;
int num3 = 7;

int suma;

using namespace std;

void funcion()
{
	cout << "Funcion sin valor de retorno " <<endl;
}

int sumar(int a, int b, int c)
{
	return (a)+ (b)+(c);
}

int main()
{
	suma = sumar(num1, num2, num3);
	cout << suma << endl;
	funcion();
	cin.get();
	return 0;
}
