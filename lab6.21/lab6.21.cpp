#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void array1(int* r, const int n, const int min, const int max)
{
	for (int i = 0; i < n; i++)
		r[i] = min + rand() % (max- min + 1);
}

void mas(int* r, const int n)
{
	for (int i = 0; i < n; i++)
		cout << " " << r[i] << "; ";
	cout << endl;
}

int max1(int* r, const int n)
{
	int max = 0;
	int imax = -1;
	for (int i = 0; i < n; i++)
		if (r[i] > max)
		{
			max = r[i];
			imax = i;
		}
	return imax;
}

int min1(int* r, const int n)
{
	int min = 0;
	int imin = -1;
	for (int i = 0; i < n; i++)
		if (r[i] < min)
		{
			min = r[i];
			imin = i;
		}
	return imin;
}

int sum(int* r, const int n)
{
	int S = 0;
	const int a = 17;
	for (int i = 0; i < n; i++)
		S = min1(r, n) + max1(r, n);
	return S;
}

int main()
{
	srand((unsigned)time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int a = 17;
	int r[a];
	int min = -100;
	int max = 100;
	array1(r, a, min, max);
	cout << "Масив із рандомних чисел:" << endl;
	mas(r, a);
	cout << "Індекс найбільшого числа: " << max1(r, a) << endl;
	cout << "Індекс найменшого числа: " << min1(r, a) << endl;
	cout << "Сума індексів: " << sum(r, a) << endl;
	system("pause");
}
