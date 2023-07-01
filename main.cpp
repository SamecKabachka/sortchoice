#include <iostream>
#include <vector>
#include <stdlib.h> // ����� ��� ������ ������� rand(), srand()
#include <time.h> // ����� ��� ������ ������� time()
//#define N 10

using namespace std;

int main()
{
	srand(time(NULL));

	//int mas[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	vector <int> mas;

	int min = 0, // ��� ������ ������������ ��������
		buf = 0;// ��� ������ ���������� 
		

	for (int i = 0; i < 10; i++)
	{
		mas.push_back(-100 + rand() % (101 - (-100) + 1));
	}

	int N = size(mas);

	/*********** ������ ���������� **************/
	for (int i = 0; i < N; i++)
	{
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

	for (int i = 0; i < N; i++) //����� ���������������� �������
		cout << mas[i] << ' ';
	cout << endl;

	return 0;
}