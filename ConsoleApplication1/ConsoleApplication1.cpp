#include <string>
#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;
struct book
{
    string title;
    string author;
    int numberofpages;
    int yearofpublication;
    
};

int main()
{
    book book1, book2;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    cout << "сколько книг?" << endl;
    cin >> N;
    cin.ignore();
    book* books = new book[N];
    for (int i = 0;i < N;i++)
    {
        cout << "введи название " << i + 1 << "-ой книги" << endl;
        getline(cin, books[i].title);
        cout << "введи автора " << i + 1 << "-ой книги" << endl;
        getline(cin, books[i].author);
        cout << "введи количество страниц " << i + 1 << "-ой книги" << endl;
        cin >> books[i].numberofpages;
        cout << "введи год издания " << i + 1 << "-ой книги" << endl;
        cin >> books[i].yearofpublication;
        cin.ignore();
    }
    cout << endl;
    cout << "все книги" << endl;
    cout << endl;
    for (int i = 0;i < N;i++)
    {
        cout << setw(4) << "книга: " << i + 1 << "-я" << endl;
        cout << setw(4) << "название книги: " << books[i].title<< endl;
        cout << setw(4) << "автор книги: " << books[i].author << endl;
        cout << setw(4) << "количество страниц в книге: " << books[i].numberofpages << endl;
        cout << setw(4) << "год издания книги: " << books[i].yearofpublication << endl;
        cout << endl;


    }


}

