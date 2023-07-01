#include <iostream>
#include <vector>
#include <stdlib.h> // нужен дл€ вызова функций rand(), srand()
#include <time.h> // нужен дл€ вызова функции time()
//#define N 10

using namespace std;

int main()
{
	srand(time(NULL));

	//int mas[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	vector <int> mas;

	int min = 0, // дл€ записи минимального значени€
		buf = 0;// дл€ обмена значени€ми 
		

	for (int i = 0; i < 10; i++)
	{
		mas.push_back(-100 + rand() % (101 - (-100) + 1));
	}

	int N = size(mas);

	/*********** Ќачало сортировки **************/
	for (int i = 0; i < N; i++)
	{
		min = i; // запомним номер текущей €чейки, как €чейки с минимальным значением
		// в цикле найдем реальный номер €чейки с минимальным значением
		for (int j = i + 1; j < N; j++)
			min = (mas[j] < mas[min]) ? j : min;
		// cделаем перестановку этого элемента, помен€в его местами с текущим
		if (i != min)
		{
			buf = mas[i];
			mas[i] = mas[min];
			mas[min] = buf;
		}
	}

	for (int i = 0; i < N; i++) //¬ывод отсортированного массива
		cout << mas[i] << ' ';
	cout << endl;

	return 0;
}