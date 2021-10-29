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
		cout << "Введите число от 1 до 100" << "\n";
		cin >> x;
		if (x > y) 
		{
			cout << "Число больше искомого" << "\n";
			cout << "Осталось попыток " <<i<< "\n";
		}
		else
		{
			if ((x < y) and(i>0))
			{
				cout << "Число меньше искомого" << "\n";
				cout << "Осталось попыток " << i << "\n";
			}
		}
	}
	if (x == y)
	{
		cout << "Вы угадали!" << "\n";
	}
	else
	{
		cout << "Вы не угадали искомое число = "<<y<< "\n";
	}
	return(0);
}