#include "Person.h"
//����������� ��� ����������
Person::Person(void) {
	name = "NULL";
	age = 0;
}
//����������
Person::~Person(void) {}
//����������� � �����������
Person::Person(string M, int C) {
	name = M;
	age = C;
}
//����������� �����������
Person::Person(const Person& Person) {
	name = Person.name;
	age = Person.age;
}
//������������
void Person::Set_age(int C) {
	age = C;
}
void Person::Set_name(string M) {
	name = M;

}
//���������� �������� ������������
Person& Person::operator=(const Person& c) {
	if (&c == this)return *this;
	name = c.name;
	age = c.age;
	return *this;
}
//���������� ������� ��� �����
istream& operator>>(istream& in, Person& c) 
{
	setlocale(LC_ALL, "ru");
	cout << "\n���:"; in >> c.name;
	cout << "\n�������:"; in >> c.age;
	return in;
}
//���������� ������� ��� ������
ostream& operator<<(ostream& out, const Person& c) 
{
	setlocale(LC_ALL, "ru");
	out << "\n��� : " << c.name;
	out << "\n������� : " << c.age;
	out << "\n";
	return out;
}