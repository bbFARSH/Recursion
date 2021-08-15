#include <iostream>
using namespace std;
//#define factorial
//#define findpower
#define fibo
#ifdef factorial
int factorial(int n)
{
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	setlocale(LC_ALL, "Ru");
	int n;
	cout << "¬ведите число дл€ вычислени€ функции: ";
	cin >> n;
	cout << "‘акториал числа " << n << " = " << factorial(n);
	return 0;
}
#endif
#ifdef findpower
int power(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
		return n * power(n, k - 1);
}

int main()
{
	setlocale(LC_ALL, "Ru");
	int a;
	int b;
	cout << "¬ведите число: ";
	cin >> a;
	cout << "¬ведите степень числа: " << endl;
	cin >> b;
	cout << power(a, b) << endl;
	return 0;
}
#endif
#ifdef fibo
int fibonacci(int k)
{
	if (k == 0)
		return 0;
	if (k == 1)
		return 1;
	return fibonacci(k - 1) + fibonacci(k - 2);
}
int main()
{
	setlocale(LC_ALL, "Ru");
	int i = 0;
	int N;
	cout << "¬ведите значение до которого будет выводитс€ число фибоначчи: ";
	cin >> N;
	while (i < N)
	{
		cout << fibonacci(i) << endl;
		i++;
	}
}
#endif // fibo
