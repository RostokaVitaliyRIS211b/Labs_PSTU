#include <iostream>
#include <clocale>

using namespace std;
int mainopo()
{
	setlocale(LC_ALL, "ru");
	int i;
	i = 1;
	cout<<" ��������� ��������� ++i * i++ = " << ++i * i++ << "\n";
	return (0);
}