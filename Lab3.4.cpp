#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double x, y;
    cout << "Введіть значення x: ";
    cin >> x;
	cout << "Введіть значення y: ";
	cin >> y;

	if (((y >= pow(x - 2, 2) - 3)  && (y <= x) && (y > 0)) || ((y >= pow(x - 2, 2) - 3) && (y <= -x) && (y <= 0)))
		cout << "Точка належить області" << endl;
	else cout << "Точка не належить області" << endl;

}