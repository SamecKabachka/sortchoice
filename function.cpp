#include "function.h"

void menu() // вывод меню
{
	cout << "0. выйти из программы" << endl;
	cout << "1. заполнить массив" << endl;
	cout << "2. считать массив" << endl;
	cout << "3. отсортировать массив с помощью однонаправленного алгоритма выбора (selection sort)" << endl;
	cout << "4. отсортировать массив с помощью двунаправленного алгоритма выбора (selection sort)" << endl;
	cout << "5. вывести массив на экран" << endl;
	cout << "6. записать массив в файл" << endl;
	cout << "выберите действие: ";
}

void fill_out(int N) // заполнение массива
{
	ofstream fout("out.txt");
	for (int i = 0; i < N; i++)
	{
		fout << (-100 + rand() % (101 - (-100) + 1)) << " ";
	}
	fout.close();
}

void read(vector<int>& mas, int N)
{
	ifstream fin("out.txt");
	int tmp;
	for (int i = 0; i < N; i++)
	{
		fin >> tmp;
		mas.push_back(tmp);
	}
	fin.close();
}

void write(vector<int>& mas)
{
	int N = size(mas);
	ofstream fout("rez.txt");
	for (int i = 0; i < N; i++)
	{
		fout << mas[i] << " ";
	}
	fout.close();
}

unsigned int bidirectional_sort(vector<int>& mas) // двунаправленная сортировка массива
{
	unsigned int start_time = clock(); // начальное время
	int N = size(mas);
	//-------------начало сортировки----------------
	for (int i = 0, j = N - 1; i < j; i++, j--)
	{
		int min = mas[i], max = mas[i];
		int min_i = i, max_i = i;
		for (int k = i; k <= j; k++)
		{
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
	unsigned int end_time = clock(); // конечное время
	return end_time - start_time; // искомое время
}

unsigned int unidirectional_sort(vector<int>& mas) // однонаправленная сортировка массива
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

void print(vector<int>& mas, unsigned int search_time) // выворд массива и времени 
{
	int N = size(mas);

	for (int i = 0; i < N; i++)
		cout << mas[i] << ' ';

	cout << endl << "затраченое времЯ: " << search_time << " мсек." << endl;
}

void print(vector<int>& mas) // выворд массива
{
	int N = size(mas);

	for (int i = 0; i < N; i++)
		cout << mas[i] << ' ';

	cout << endl;
}