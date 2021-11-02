#include <iostream>
#include <clocale>
using namespace std;
int mainuioe()
{
	setlocale(LC_ALL, "ru");
	const int a = 10;
	int i, y;
	i = 20;
	cout <<  a << "\n" << i-- << "\n" << i << "\n";
	return (0);
}