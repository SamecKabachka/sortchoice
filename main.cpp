#include "function.h"

int main()
{
	srand(time(NULL));

	vector <int> mas;
	
	fill_out(mas);
	
	sort(mas);

	print(mas);

	return 0;
}