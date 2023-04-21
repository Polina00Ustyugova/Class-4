#pragma once
#include "Person.h"
//����� Student ����������� �� ������ Person
class Student :
	public Person // ������� �����
{
public:
	Student(void);//����������� ��� ����������
	~Student(void);//����������
	Student(string, int, int);//����������� � �����������
	Student(const Student&);//����������� �����������
	int Get_grade() { return grade; }//�����������
	string Get_subject() { return subject; }//�����������
	void Set_grade(int);//��������
	void Set_subject(string);//��������
	void CheckGrade(); // �������� ������
	Student& operator=(const Student&);//�������� ������������
	friend istream& operator>>(istream& in, Student& l);//�������� �����
	friend ostream& operator<<(ostream& out, const Student& l); //�������� ������
protected:
	int grade;//���������� ����� ������� - ������
	string subject; // �������
};