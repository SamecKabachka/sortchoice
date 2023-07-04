#include "function.h"

void menu() // ����� ����
{
	cout << "0. ����� �� ���������" << endl;
	cout << "1. ��������� ������" << endl;
	cout << "2. ������� ������" << endl;
	cout << "3. ������������� ������ � ������� ����������������� ��������� ������ (selection sort)" << endl;
	cout << "4. ������������� ������ � ������� ���������������� ��������� ������ (selection sort)" << endl;
	cout << "5. ������� ������ �� �����" << endl;
	cout << "6. �������� ������ � ����" << endl;
	cout << "�������� ��������: ";
}

void fill_out(int N) // ���������� �������
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

unsigned int bidirectional_sort(vector<int>& mas) // ��������������� ���������� �������
{
	unsigned int start_time = clock(); // ��������� �����
	int N = size(mas);
	//-------------������ ����������----------------
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
	unsigned int end_time = clock(); // �������� �����
	return end_time - start_time; // ������� �����
}

unsigned int unidirectional_sort(vector<int>& mas) // ���������������� ���������� �������
{
	unsigned int start_time = clock(); // ��������� �����
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
	unsigned int end_time = clock(); // �������� �����
	return end_time - start_time; // ������� �����
}

void print(vector<int>& mas, unsigned int search_time) // ������ ������� � ������� 
{
	int N = size(mas);

	for (int i = 0; i < N; i++)
		cout << mas[i] << ' ';

	cout << endl << "���������� �����: " << search_time << " ����." << endl;
}

void print(vector<int>& mas) // ������ �������
{
	int N = size(mas);

	for (int i = 0; i < N; i++)
		cout << mas[i] << ' ';

	cout << endl;
}