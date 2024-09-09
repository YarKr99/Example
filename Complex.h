#pragma once
#include <math.h>
#include <iostream>

class Complex
{
	//���������� �������������
private:
	double realPart;
	double imaginaryPart;

public:
	Complex(); //����������� �� ���������
	Complex(const Complex& var); // ����������� ����������
	Complex(double real); //����������� � ���������� �� ��������������� �����
	Complex(double re, double im); // ����������� � ���������� �� ���� �����

	Complex& operator=(const Complex& var) = default; //�������� ������������, ������ � �������� ������ default (���������� ������� ����������� ����)

	~Complex() = default; //����������, ������ � �������� ������ default (����� ������)

	double Re(); //����� ������������ �������� �����
	double Im(); //����� ������������ ����� �����
	double magnitude(); // ����� ����������� ������ �����
	double angle(); // ����� ����������� �������� �����

	Complex complement(); // ����� ������������ ����������� �����

	Complex operator+(const Complex& var); // ������������� �������� �������� � + �
	Complex operator+(const double& var); // ������������� �������� �������� ������������ � ��������������� � + b
	friend Complex operator+(const double& var1, const Complex& var2); //������������� �������� �������� � + �, ������������� �������
	
	Complex operator*(const Complex& var); // ��������� �*�
	Complex operator*(const double& var); // ��������� �*b
	friend Complex operator*(const double& var1, const Complex& var2); //��������� �*�
	
	friend std::ostream& operator<<(std::ostream& s, const Complex& c); //���������� ��������� ���������� ������
};