#include <iostream>
#include <clocale>
using namespace std;
int mainertенен()
{
	setlocale(LC_ALL, "ru");
	int i,y,x,p,j,k,h,m,s,sum;
	cout << "Введите время начала промежутка" << "\n";
	cin >> i>>y>>x;
	cout << "Введите время конца промежутка" << "\n";
	cin >> p >> j >> k;
	sum = (p * 60 * 60 + j * 60 + k) - (i * 60 * 60 + y * 60 + x);
	h = sum / 3600;
	m = (sum - h * 3600) / 60;
	s = sum - h * 3600 - m * 60;
	cout << "Продолжительность промежутка = "<<h<<" - часов "<<m<<" - минут "<< s << " - секунд "<< "\n";
	return (0);
}