#include <iostream>
#include <iomanip>
#include <time.h>
#include <algorithm>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i) {
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i) {
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

void Sort(int* a, const int n, int i) {
	if (i == n - 1)
		return;
	int imax = i;
	for (int j = i + 1; j < n; ++j)
		if (a[j] > a[imax])
			imax = j;
	if (imax != i)
		swap(a[i], a[imax]);
	Sort(a, n, i + 1);
}

template <typename T>
void Create(T* a, const int size, const T Low, const T High, int i) {
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

template <typename T>
void Print(T* a, const int size, int i) {
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

template <typename T>
void Sort(T* a, const int n, int i) {
	if (i == n - 1)
		return;
	int imax = i;
	for (int j = i + 1; j < n; ++j)
		if (a[j] > a[imax])
			imax = j;
	if (imax != i)
		swap(a[i], a[imax]);
	Sort(a, n, i + 1);
}

int main() {
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = 1;
	int High = 100;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	Sort(a, n, 0);
	Print(a, n, 0);
	return 0;
}