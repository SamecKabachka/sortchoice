#include "function.h"

void menu()//����� ����
{
	cout << "0. ����� �� ���������" << endl;
	cout << "1. ��������� ������" << endl;
	cout << "2. ����������� ������ � ������� ��������� ������ (selection sort)" << endl;
	cout << "�������� ��������: ";

}

void fill_out(vector<int>& mas)//���������� �������
{
	for (int i = 0; i < 10; i++)
	{
		mas.push_back(-100 + rand() % (101 - (-100) + 1));
	}
}

void sort(vector<int>& mas)//���������� �������
{
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
}

void print(vector<int>& mas)//������ �������
{
	int N = size(mas);

	for (int i = 0; i < N; i++) //����� ���������������� �������
		cout << mas[i] << ' ';
	cout << endl;
}