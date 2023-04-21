#include "Student.h"
//����������� ��� ����������
Student::Student(void) :Person() {
	grade = 0;
}
//����������
Student::~Student(void) {}
//����������� � �����������
Student::Student(string M, int C, int G) :Person(M, C) {
	grade = G;
}
//����������� �����������
Student::Student(const Student& L) {
	name = L.name;
	age = L.age;
	grade = L.grade;
}
//�����������
void Student::Set_grade(int G) {
	grade = G;
}
void Student::CheckGrade() 
{
	setlocale(LC_ALL, "ru");
	if (grade < 3) cout << "���� ������� ����� �������������������� ������" << endl;
}
//������� ������������
Student& Student::operator=(const Student& l) {
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	grade = l.grade;
	return *this;
}
//�������� �����
istream& operator>>(istream& in, Student& l) 
{
	setlocale(LC_ALL, "ru");
	cout << "\n���:"; in >> l.name;
	cout << "\n�������:"; in >> l.age;
	cout << "\n������:"; in >> l.grade;
	return in;
}
//�������� ������
ostream& operator<<(ostream& out, const Student& l) 
{
	setlocale(LC_ALL, "ru");
	out << "\n��� : " << l.name;
	out << "\n������� : " << l.age;
	out << "\n������ : " << l.grade;
	out << "\n";
	return out;
}