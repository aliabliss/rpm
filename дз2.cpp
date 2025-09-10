#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <string>

using namespace std;

struct circle
{
	double coordinatesofthecenter1;
	double coordinatesofthecenter2;
	double radius;
	string colour;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	cout << "введи количество окружностей:" << endl;
	cin >> N;

	cin.ignore();
	circle* circle1 = new circle[N];
	for (int i = 0; i < N; i++)
	{
		cout << "введи координаты центра: " << i + 1 << " -ой окружности " << endl;
		cin >> circle1[i].coordinatesofthecenter1;
		cin >> circle1[i].coordinatesofthecenter2;
		cout << "введи радиус: " << i + 1 << " -ой окружности" << endl;
		cin >> circle1[i].radius;
		cout << "введи цвет: " << i + 1 << " -ой окружности" << endl;
		cin.ignore();
		getline(cin, circle1[i].colour);


	}
	cout << endl;
	cout << "все окружности" << endl;
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << setw(4) << "окружность: " << i + 1 << " -я " << endl;
		cout << setw(4) << "центры: " << circle1[i].coordinatesofthecenter1 << ", " << circle1[i].coordinatesofthecenter2 << endl;
		cout << setw(4) << "радиус: " << circle1[i].radius << endl;;
		cout << setw(4) << "цвет: " << circle1[i].colour << endl;
		cout << endl;
	}

}
