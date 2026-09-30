#include <iostream>
#include <Windows.h>
#include "Payment.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Payment a;
	a.Display();
	a.Display();

	Payment b;
	b.Display();
	b.Read();
	b.Display();

	std::string resultText = b.toString();
	std::cout << resultText;

	system("pause");
	return 0;
}