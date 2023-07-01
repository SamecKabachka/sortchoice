#include <iostream>

using namespace std;

int main()
{
	int mas[6] = { 5, 9, 2, 7, 11, 6 },
		tmp;

	for (int i = 0; i < 6; i++)
	{
		int index = i;

		for (int j = i+1; j < 6; j++)
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

	for (int i = 0; i < 6; i++)
	{
		cout << mas[i] << " ";
	}

	return 0;
}