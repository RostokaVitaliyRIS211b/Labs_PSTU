#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char a, b, c, d, e;
	cout << "Введите пять символов"<<"\n";
	cin >> a>> b>>c>>d>>e;
	cout << "Пять символов в обратной последовательности" << "\n";
	cout<<e<<d<<c<<b<<a<<"\n";
	return (0);
}