#include <iostream>
#include <clocale>
using namespace std;
int mainewrt()
{
	setlocale(LC_ALL, "ru");
	double i;
	cout << "������� ���������� �������� �� ����������" << "\n";
	cin >> i;
	cout << "����������� � �������� �������:" << "\n";
	cout <<(5.0/9.0)*(i-32)<<"\n";
	return (0);
}