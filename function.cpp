#include "function.h"

void menu()//вывод меню
{
	cout << "0. Выйти из программы" << endl;
	cout << "1. Заполнить массив" << endl;
	cout << "2. Сортировать массив с помощью алгоритма выбора (selection sort)" << endl;
	cout << "Выберите действие: ";

}

void fill_out(vector<int>& mas)//заполнение массива
{
	for (int i = 0; i < 10; i++)
	{
		mas.push_back(-100 + rand() % (101 - (-100) + 1));
	}
}

void sort(vector<int>& mas)//сортировка массива
{
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
}

void print(vector<int>& mas)//выворд массива
{
	int N = size(mas);

	for (int i = 0; i < N; i++) //Вывод отсортированного массива
		cout << mas[i] << ' ';
	cout << endl;
}