#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FACTORIAL
//#define DEGREE
//#define ASCII
//#define FIBONACCI
//#define SIMPLE_DIGIT
//#define MULTIPLIER
//#define PIFAGOR
void main()
{
	setlocale(LC_ALL, "");
	
#ifdef FACTORIAL
	int n;
	double f = 1;
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
#endif // FACTORIAL

#ifdef DEGREE
	double a;  // Основание степени
	int n;  // Показатель степени
	double N = 1;  //Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // DEGREE
	
#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
#endif // ASCII

#ifdef FIBONACCI
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI

#ifdef SIMPLE_DIGIT
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE_DIGIT

#ifdef MULTIPLIER
	for (int i = 1; i <= 10; i++)
	{
		for (int n = 1; n <= 10; n++)
			cout << i << "*" << n << "=" << i * n << "\t";
		cout << endl;
	}
#endif // MULTIPLIER

#ifdef PIFAGOR
	for (int i = 1; i <= 10; i++)
	{
		for (int n = 1; n <= 10; n++)
			cout << i * n << "\t";
		cout << endl;
	}
#endif // PIFAGOR
}