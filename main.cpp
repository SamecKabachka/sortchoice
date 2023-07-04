#include "function.h"

const int N = 1000;

int main()
{
	//------------------блок переменных-----------------
	unsigned int num, search_time = NULL; // переменная для записи пункта меню
	vector <int> mas;
	//-------------------блок настроек------------------
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	//---------------------блок кода--------------------
	do {
		//ofstream fout;

		menu();
		cin >> num;

		switch (num)
		{
		case 0:
			cout << "До свидания!";
			break;

		case 1:
			fill_out(N);
			cout << "массив заполнен" << endl;
			system("pause");
			break;

		case 2:
			read(mas, N);
			cout << "массив считан" << endl;
			system("pause");
			break;

		case 3:
			search_time = unidirectional_sort(mas);
			cout << "массив отсортирован" << endl;
			system("pause");
			break;

		case 4:
			search_time = bidirectional_sort(mas);
			cout << "массив отсортирован" << endl;
			system("pause");
			break;

		case 5:
			if (search_time == NULL)
			{
				print(mas);
			}
			else print(mas, search_time);
			system("pause");
			break;

		case 6:
			write(mas);
			cout << "массив записан" << endl;
			system("pause");
			break;

		default:
			cout << " Введено неверное число" << endl;
		}
		system("CLS");

	} while (num);

	return 0;
}