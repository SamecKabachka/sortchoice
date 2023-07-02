#include "function.h"


int main()
{
//------------------блок переменных-----------------
	unsigned int num, search_time = NULL;//переменная для записи пункта меню
	vector <int> mas;
//-------------------блок настроек------------------
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
//---------------------блок кода--------------------
	do {
		menu();
		cin >> num;

		switch (num)
		{
			case 0:
				cout << "До свидания!";
				break;

			case 1:
				fill_out(mas);
				cout << "массив заполнен" << endl;
				system("pause");
				break;

			case 2:
				search_time = sort(mas);
				cout << "массив отсортирован" << endl;
				system("pause");
				break;

			case 3:
				if (search_time)
				{
					print(mas);
				}
				else print(mas, search_time);
				system("pause");
				break;

			default:
				cout << " Введено неверное число" << endl;
		}
		system("CLS");
	} while(num);


	return 0;
}