#include <iostream>
#include <clocale>
using namespace std;
int mainert()
{
	setlocale(LC_ALL, "ru");
	int i;
	cout << "������� ���������� ��������"<<"\n";
	cin>>i;
	cout << "����� � ���������� ����� = " << i / 7.481<< "\n";
	return (0);
}