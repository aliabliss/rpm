
#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
using namespace std;

struct chemicalelement
{
	string title;
	string symbol;
	int sequencenumber;
	double atomicmass;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	cout << "введите количество химических элементов: " << endl;
	cin >> N;
	cin.ignore();
	chemicalelement* element = new chemicalelement[N];
	for (int i = 0; i < N; i++)
	{
		cout << "введи название " << i + 1 << " -го химического элемента: " << endl;
		getline(cin, element[i].title);
		cout << "введи символ " << i + 1 << " -го химического элемента: " << endl;
		getline(cin, element[i].symbol);
		cout << "введи порядковый номер " << i + 1 << " -го химического элемента: " << endl;
		cin >> element[i].sequencenumber;
		cout << "введи атомную массу " << i + 1 << " -го химического элемента: " << endl;
		cin >> element[i].atomicmass;
		cin.ignore();


	}
	cout << endl;
	cout << "все химические элементы" << endl;
	cout << endl;

	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << "химический элемент под номером: " << i + 1 << endl;
		cout << setw(4) << "название: " << element[i].title << endl;
		cout << setw(4) << "символ: " << element[i].symbol << endl;;
		cout << setw(4) << "порядковый номер: " << element[i].sequencenumber << endl;
		cout << setw(4) << "атомная масса: " << element[i].atomicmass << endl;
		cout << endl;



	}

}