#include "function.h"


int main()
{
//------------------���� ����������-----------------
	unsigned int num, search_time = NULL;//���������� ��� ������ ������ ����
	vector <int> mas;
//-------------------���� ��������------------------
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//srand(time(NULL));
//---------------------���� ����--------------------
	do {
		menu();
		cin >> num;

		switch (num)
		{
			case 0:
				cout << "�� ��������!";
				break;

			case 1:
				fill_out(mas);
				cout << "������ ��������" << endl;
				system("pause");
				break;

			case 2:
				search_time = unidirectional_sort(mas);
				cout << "������ ������������" << endl;
				system("pause");
				break;

			case 3:
				search_time = bidirectional_sort(mas);
				cout << "������ ������������" << endl;
				system("pause");
				break;

			case 4:
				if (search_time == NULL)
				{
					print(mas);
				}
				else print(mas, search_time);
				system("pause");
				break;

			default:
				cout << " ������� �������� �����" << endl;
		}
		system("CLS");
	} while(num);


	return 0;
}