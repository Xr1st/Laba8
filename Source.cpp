#include <iostream>
using namespace std;

void one() {

	int n;
	cout << "���� �����: ";
	cin >> n;

	cout << n / 10000 << endl;
	cout << n / 1000 % 10 << endl;
	cout << n / 100 % 10 << endl;
	cout << n / 10 % 10 << endl;
	cout << n % 10 << endl;
	cout << endl;

}

void two() {
	char symbol;
	cout << "���� �����: ";
	cin >> symbol;
	symbol = toupper(symbol);
	cout << "���������: " << symbol << endl;

}

double srednee(int *arr, int size) 
{ 
	double res = 0;
	for (int i = 0; i < size; i++) 
	{ res += arr[i]; }    
	res = res / size;
	return res;
}

void three() {
	cout << "���������� ������ �������: ";
	int size;
	cin >> size;

	int* arr = new int[size];
	cout << "��������� ������: ";
	for (int i = 0; i < size; i++)
		cin >> arr[i];

	cout << "������� �������������� �������: " << srednee(arr,size) << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	one();
	two();
	three();




}