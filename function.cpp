#include "function.h"

void menu()//вывод меню
{
	cout << "0. Выйти из программы" << endl;
	cout << "1. Заполнить массив" << endl;
	cout << "2. Сортировать массив с помощью однонаправленного алгоритма выбора (selection sort)" << endl;
	cout << "2. Сортировать массив с помощью двунаправленного алгоритма выбора (selection sort)" << endl;
	cout << "3. Вывести массив на экран" << endl;
	cout << "Выберите действие: ";

}

void fill_out(vector<int>& mas)//заполнение массива
{
	for (int i = 0; i < 1000; i++)
	{
		mas.push_back(-100 + rand() % (101 - (-100) + 1));
	}
}

unsigned int bidirectional_sort(vector<int>& mas)//двунаправленная сортировка массива
{
	unsigned int start_time = clock(); // начальное время

	int N = size(mas);
	/*********** Начало сортировки **************/
	for (int i = 0; i < N; i++)
	{
		int min = 0, // для записи минимального значения
			buf = 0;// для обмена значениями 

		min = i; // запомним номер текущей ячейки, как ячейки с минимальным значением
		// в цикле найдем реальный номер ячейки с минимальным значением
		for (int j = i + 1; j < N; j++)
			min = (mas[j] < mas[min]) ? j : min;
		// cделаем перестановку этого элемента, поменяв его местами с текущим
		if (i != min)
		{
			buf = mas[i];
			mas[i] = mas[min];
			mas[min] = buf;
		}
	}
	unsigned int end_time = clock(); // конечное время
	return end_time - start_time; // искомое время
}

unsigned int unidirectional_sort(vector<int>& mas)//однонаправленная сортировка массива
{
	unsigned int start_time = clock(); // начальное время

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
	unsigned int end_time = clock(); // конечное время
	return end_time - start_time; // искомое время
}

void print(vector<int>& mas, unsigned int search_time)//выворд массива и времени 
{
	int N = size(mas);

	for (int i = 0; i < N; i++) 
		cout << mas[i] << ' ';
	cout << endl << "затраченое время: " << search_time << " сек.";
}

void print(vector<int>& mas)//выворд массива
{
	int N = size(mas);

	for (int i = 0; i < N; i++)
		cout << mas[i] << ' ';
	cout << endl;
}