#include <iostream>
#include <clocale>
using namespace std;
int main���������()
{
	setlocale(LC_ALL, "ru");
	int i,x;
	cout << "������� ������ �����" << "\n";
	cin >> i;
	cout << "������� ������ �����" << "\n";
	cin >> x;
	cout << "��������� ��������� = "<<i*x<< "\n";
	return (0);
}