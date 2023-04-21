#include "Student.h"
//конструктор без параметров
Student::Student(void) :Person() {
	grade = 0;
}
//деструктор
Student::~Student(void) {}
//конструктор с параметрами
Student::Student(string M, int C, int G) :Person(M, C) {
	grade = G;
}
//конструктор копирования
Student::Student(const Student& L) {
	name = L.name;
	age = L.age;
	grade = L.grade;
}
//модификатор
void Student::Set_grade(int G) {
	grade = G;
}
void Student::CheckGrade() 
{
	setlocale(LC_ALL, "ru");
	if (grade < 3) cout << "Этот студент имеет неудовлетворительные оценки" << endl;
}
//оперция присваивания
Student& Student::operator=(const Student& l) {
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	grade = l.grade;
	return *this;
}
//операция ввода
istream& operator>>(istream& in, Student& l) 
{
	setlocale(LC_ALL, "ru");
	cout << "\nИмя:"; in >> l.name;
	cout << "\nВозраст:"; in >> l.age;
	cout << "\nОценка:"; in >> l.grade;
	return in;
}
//операция вывода
ostream& operator<<(ostream& out, const Student& l) 
{
	setlocale(LC_ALL, "ru");
	out << "\nИмя : " << l.name;
	out << "\nВозраст : " << l.age;
	out << "\nОценка : " << l.grade;
	out << "\n";
	return out;
}