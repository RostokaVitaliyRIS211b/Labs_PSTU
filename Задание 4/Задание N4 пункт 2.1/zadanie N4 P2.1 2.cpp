#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int i;
	cout << "Введите количество галлонов"<<"\n";
	cin>>i;
	cout << "Объем в кубических футах = " << i / 7.481<< "\n";
	return (0);
}
