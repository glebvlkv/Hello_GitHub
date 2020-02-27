#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	/* 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char N [55];
	cout << "Для вычисления N! введите:" << endl;
	cout << "N="; cin >> N;
	int k = 0, s=0;
	for (int i = 0; i<strlen(N) ; i++) {// не знаю почему, но sizeof/sizeof не помогает найти длину массива
		if (N[i] == '.' || N[i] == '0' || N[i] == '1' || N[i] == '2' || N[i] == '3' || N[i] == '4' || N[i] == '5' || N[i] == '6' || N[i] == '7' || N[i] == '8' || N[i] == '9' || N[i] == '-');
		else {
			cout << "Error: N must be natural, not string." << endl; s++; break;
		}
		if (N[i] == '.') k++;
		if ((N[i] == '-') && (i != 0)) { cout << "Error: N must be natural, not string." << endl; s++; break; }
	} 
	if (s==1);
	else {
		s = atoi(N);
		if (k > 1) cout << "Error: N must be natural, not string." << endl;
		else {
			if (s < 0) cout << "Error: N must be natural, not negative.";
			else {
				if (k == 1) cout << "Error: N must be natural, not real.";
				else {
					cout << N << "!=";
					s++;
					int fact = 1;
					while (s--, s > 1) fact *= s;
					cout << fact << endl;
				}
			}
		}
	}*/
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double n;
	int n_int, f = 1 ;

	cout << "Для вычисления N! введите:" << endl;
	cout << "N = "; cin >> n;
	n_int = n;

	if (!cin)
		cout << "Введено не числовое значение." << endl;
	else {
			if (n < 0)
				cout << "Введено отрицательное значение." << endl;
			else {
				if (n_int != n)
					cout << "Введено дробное число." << endl;
				else {
					cout << n << "! = ";
					n++;
					while (n--, n > 1) f *= n;
					cout << f << endl;
				}
			}
	}
	return 0;// hi
}



