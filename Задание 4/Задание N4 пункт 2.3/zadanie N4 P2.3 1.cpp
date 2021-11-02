#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int i,x;
	cout << "Введите первое число" << "\n";
	cin >> i;
	cout << "Введите второе число" << "\n";
	cin >> x;
	cout << "Результат умножения = "<<i*x<< "\n";
	return (0);
}
