#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char a, b, c, d, e;
	cout << "������� ���� ��������"<<"\n";
	cin >> a>> b>>c>>d>>e;
	cout << "���� �������� � �������� ������������������" << "\n";
	cout<<e<<d<<c<<b<<a<<"\n";
	return (0);
}