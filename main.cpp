#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*‘ункции*/

/*
	возрващаемое_значение им€_функции (параметры)
	{
		блок_повтор€ющегос€_кода (тело);
	}
*/


int sum(int a, int b)
{
	int result;

	result = a + b;

	return result;
}

int sum1(int a1, int b2)
{
	return a1 + b2;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int q = 11, qw = 12, qwe = 13;

	cout << sum(q, qw) << endl;

	cout << sum1(qw, qwe) << endl;
}