#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "������� ������ �������	: ";

	int size;
	cin >> size;	

	int* array = new int[size];
	int otrizat = 0;
	cout << "��������� ������ ����� ������: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < size; i++) {
		if (array[i] < 0)
			otrizat++;
	}

	int* copy_array = new int[size-otrizat];

	int j = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] >= 0)
		{
			copy_array[j] = array[i];
			j++;
		}
	}
	

	cout << "����� ������ ��� ������������� �����: ";
	for (int i = 0; i < size-otrizat; i++) {
		cout << copy_array[i] << " ";
	}


	return 0;
}