#include<iostream>
#include<ctime>
#include<clocale>
#include<string>
using namespace std;
char x,y,z;
string s;
int main()
{
	setlocale(LC_ALL,"ru");
	 s = "1";
	while ((s.length() != 3) or ((s[0] == s[1]) or (s[1] == s[2]) or (s[0] == s[2]))or((int)(s[0]) == 48))
	{
		cout << "Введите трехзначное число с неповторяющимися цифрами"<<"\n";
		cin >> s;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int u = 0; u < 3; u++)
		{
			for (int k = 0; k < 3; k++)
			{
				if ((i!=u)and(i!=k)and(u!=k))
				{
					cout << s[i] << s[u] << s[k] <<"\n";
				}
			}
		}
	}
	 if (((int)(s[0]) > (int)(s[1])) and ((int)(s[0]) > (int)(s[2])))
    {
        cout << "Максимальная комбинация:"<<"\n";
        if ((int)(s[1]) > (int)(s[2]))
        {
            cout << s[0] << s[1] << s[2];

        }
        else
        {
            cout << s[0] << s[2] <<s[1] ;
        }

    }
    else
        if (((int)(s[1]) > (int)(s[0])) && ((int)(s[1]) > (int)(s[2])))
        {
            cout << "Максимальная комбинация:" << "\n";
            if ((int)(s[0]) > (int)(s[3]))
            {
                cout << s[1] << s[0] << s[2];
            }
            else
            {

                cout << s[1] << s[2] << s[0];
            }
        }
        else
            if (((int)(s[2]) > (int)(s[1])) && ((int)(s[2]) > (int)(s[0])))
            {
                cout << "Максимальная комбинация:" << "\n";
                if ((int)(s[1]) > (int)(s[0]))
                {
                    cout << s[2] << s[1] << s[0];

                }
                else
                {
                    cout << s[2] << s[0] << s[1];
                }
            }
	return(0);
}
