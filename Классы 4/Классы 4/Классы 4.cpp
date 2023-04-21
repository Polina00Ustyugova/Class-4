#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Windows.h"
using namespace std;
// глобальные функции
void f1(Person& c) 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	c.Set_name("Рома");
	cout << "Имя было изменено" << endl;
	cout << c;
}
Person f2() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student l("Антон", 18, 2);
	return l;
}
void main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//работа с классом Person
	Person a;
	cin >> a;
	cout << a;
	Person b("Елена", 40);
	cout << b;
	a = b;
	cout << "Объекты скопированы" << endl;
	cout << a;
	//работа с классом Student
	Student c;
	cin >> c;
	//принцип подстановки
	f1(c);//передаем объект класса Student
	a = f2();//создаем в функции объект класса Student
	cout << a;
	cin >> c;
	c.CheckGrade();
}