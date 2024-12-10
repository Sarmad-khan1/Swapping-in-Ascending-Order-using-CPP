#include <iostream>
using namespace std;
int main()
{
	system("cls");
	int size;
	cout << "Size: ";
	cin >> size;
	int list[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Packages: ";
		cin >> list[i];
	}
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (list[i] > list[j])
			{
				counter = list[i];
				list[i] = list[j];
				list[j] = counter;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout<< list[i] << " ";
	}
	return 0;
}