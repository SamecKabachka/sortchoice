#include "function.h"

void menu()//вывод меню
{
	cout << "0. ¬ыйти из программы" << endl;
	cout << "1. «аполнить массив" << endl;
	cout << "2. —ортировать массив с помощью однонаправленного алгоритма выбора (selection sort)" << endl;
	cout << "2. —ортировать массив с помощью двунаправленного алгоритма выбора (selection sort)" << endl;
	cout << "3. ¬ывести массив на экран" << endl;
	cout << "¬ыберите действие: ";

}

void fill_out(vector<int>& mas)//заполнение массива
{
	for (int i = 0; i < 10000; i++)
	{
		mas.push_back(-100 + rand() % (101 - (-100) + 1));
	}
}

unsigned int bidirectional_sort(vector<int>& mas)//двунаправленна€ сортировка массива
{
	unsigned int start_time = clock(); // начальное врем€
	
	int N = size(mas);
	/*********** Ќачало сортировки **************/

	for (int i = 0, j = N - 1; i < j; i++, j--) {
		int min = mas[i], max = mas[i];
		int min_i = i, max_i = i;
		for (int k = i; k <= j; k++) {
			if (mas[k] > max) {
				max = mas[k];
				max_i = k;
			}
			else if (mas[k] < min) {
				min = mas[k];
				min_i = k;
			}
		}

		
		swap(mas[i], mas[min_i]);

	
		if (mas[min_i] == max)
			swap(mas[j], mas[min_i]);
		else
			swap(mas[j], mas[max_i]);
	}


	unsigned int end_time = clock(); // конечное врем€
	return end_time - start_time; // искомое врем€
}

unsigned int unidirectional_sort(vector<int>& mas)//однонаправленна€ сортировка массива
{
	unsigned int start_time = clock(); // начальное врем€

	int N = size(mas), tmp;

	for (int i = 0; i < N; i++)
	{
		int index = i;

		for (int j = i + 1; j < N; j++)
		{
			if (mas[index] > mas[j])
			{
				index = j;
			}
		}
		tmp = mas[i];
		mas[i] = mas[index];
		mas[index] = tmp;


	}
	unsigned int end_time = clock(); // конечное врем€
	return end_time - start_time; // искомое врем€
}

void print(vector<int>& mas, unsigned int search_time)//выворд массива и времени 
{
	int N = size(mas);

	for (int i = 0; i < N; i++) 
		cout << mas[i] << ' ';
	cout << endl << "затраченое врем€: " << search_time << " мсек.";
}

void print(vector<int>& mas)//выворд массива
{
	int N = size(mas);

	for (int i = 0; i < N; i++)
		cout << mas[i] << ' ';
	cout << endl;
}