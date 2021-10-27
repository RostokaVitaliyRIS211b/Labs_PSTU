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
		cout << "Ââåäèòå ÷èñëî îò 1 äî 99" << "\n";
		cin >> x;
		cout << "" << "\n";
		if (x > y) 
		{
			cout << "×èñëî áîëüøå èñêîìîãî" << "\n";
			cout << "Îñòàëîñü ïîïûòîê " <<i<< "\n";
			cout << "" << "\n";
		}
		else
		{
			if ((x < y) and(i>0))
			{
				cout << "×èñëî ìåíüøå èñêîìîãî" << "\n";
				cout << "Îñòàëîñü ïîïûòîê " << i << "\n";
				cout << "" << "\n";
			}
		}
	}
	if (x == y)
	{
		cout << "Âû óãàäàëè!" << "\n";
	}
	else
	{
		cout << "Âû íå óãàäàëè èñêîìîå ÷èñëî = "<<y<< "\n";
	}
	return(0);
}
