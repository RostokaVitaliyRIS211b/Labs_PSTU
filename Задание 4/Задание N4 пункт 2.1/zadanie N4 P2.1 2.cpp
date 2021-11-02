#include <iostream>
#include <clocale>
using namespace std;
int mainert()
{
	setlocale(LC_ALL, "ru");
	int i;
	cout << "¬ведите количество галлонов"<<"\n";
	cin>>i;
	cout << "ќбъем в кубических футах = " << i / 7.481<< "\n";
	return (0);
}