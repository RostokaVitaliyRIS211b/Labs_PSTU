#include<iostream>
#include<ctime>
#include<clocale>
#include<string>
using namespace std;
int x, y,i;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	y = rand() % 100;
	i = 7;
	while ((i!=0) and (x!=y))
	{
		--i;
		cout << "������� ����� �� 1 �� 100" << "\n";
		cin >> x;
		if (x > y) 
		{
			cout << "����� ������ ��������" << "\n";
			cout << "�������� ������� " <<i<< "\n";
		}
		else
		{
			if ((x < y) and(i>0))
			{
				cout << "����� ������ ��������" << "\n";
				cout << "�������� ������� " << i << "\n";
			}
		}
	}
	if (x == y)
	{
		cout << "�� �������!" << "\n";
	}
	else
	{
		cout << "�� �� ������� ������� ����� = "<<y<< "\n";
	}
	return(0);
}