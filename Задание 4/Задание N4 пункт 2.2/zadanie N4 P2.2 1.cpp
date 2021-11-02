#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double i;
	cout << "Введите количество градусов по Фаренгейту" << "\n";
	cin >> i;
	cout << "Темперутура в градусах Цельсия:" << "\n";
	cout <<(5.0/9.0)*(i-32)<<"\n";
	return (0);
}
