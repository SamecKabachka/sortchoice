#include "function.h"

void menu()//����� ����
{
	cout << "0. ����� �� ���������" << endl;
	cout << "1. ��������� ������" << endl;
	cout << "2. ����������� ������ � ������� ����������������� ��������� ������ (selection sort)" << endl;
	cout << "2. ����������� ������ � ������� ���������������� ��������� ������ (selection sort)" << endl;
	cout << "3. ������� ������ �� �����" << endl;
	cout << "�������� ��������: ";

}

void fill_out(vector<int>& mas)//���������� �������
{
	for (int i = 0; i < 1000; i++)
	{
		mas.push_back(-100 + rand() % (101 - (-100) + 1));
	}
}

unsigned int bidirectional_sort(vector<int>& mas)//��������������� ���������� �������
{
	unsigned int start_time = clock(); // ��������� �����

	int N = size(mas);
	/*********** ������ ���������� **************/
	for (int i = 0; i < N; i++)
	{
		int min = 0, // ��� ������ ������������ ��������
			buf = 0;// ��� ������ ���������� 

		min = i; // �������� ����� ������� ������, ��� ������ � ����������� ���������
		// � ����� ������ �������� ����� ������ � ����������� ���������
		for (int j = i + 1; j < N; j++)
			min = (mas[j] < mas[min]) ? j : min;
		// c������ ������������ ����� ��������, ������� ��� ������� � �������
		if (i != min)
		{
			buf = mas[i];
			mas[i] = mas[min];
			mas[min] = buf;
		}
	}
	unsigned int end_time = clock(); // �������� �����
	return end_time - start_time; // ������� �����
}

unsigned int unidirectional_sort(vector<int>& mas)//���������������� ���������� �������
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

void print(vector<int>& mas, unsigned int search_time)//������ ������� � ������� 
{
	int N = size(mas);

	for (int i = 0; i < N; i++) 
		cout << mas[i] << ' ';
	cout << endl << "���������� �����: " << search_time << " ���.";
}

void print(vector<int>& mas)//������ �������
{
	int N = size(mas);

	for (int i = 0; i < N; i++)
		cout << mas[i] << ' ';
	cout << endl;
}