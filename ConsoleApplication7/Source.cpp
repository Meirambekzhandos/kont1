#include <stdio.h>
#include <locale.h>
#include<iostream>
#include<time.h>
#include<string.h>

using namespace std;


void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
end:
	int x;
	cout << "" << endl;
	cin >> x;

	if (x == 1) {
		//�������� ���������, ����� ��������� ����� ���� ��������� � ������� � ������� ����������

		int x[10], sum = 0;

		for (int i = 0; i < 10;i++) {
			x[i] = 1 + rand() % 99;
		}

		for (int i = 0; i < 10;i++) {
			sum += x[i];
		}

		cout << "����� ���� ����� ������� = " << sum << endl;
	}

	else if (x == 2) {
		//�������� ���������, ����� ���������� �������� ������� � �������� �������
		int x[15], sum = 0;

		for (int i = 0; i < 15;i++) {
			x[i] = 1 + rand() % 99;
			cout << x[i] << " \t";
		}

		cout << endl;

		for (int j = 14; j >= 0;j--) {
			cout << x[j] << " \t";
		}
	}

	else if (x == 3) {
		/*�������� ���������, ������� ��������� ������ ����� ����� � ������� �����������.������, ���� � ��������� ������ ������������ ������������� �����,
		���� ��������� ������ ����������� ������ � ������� ��������. (�� ������ ������������ ����� ��������� ����������, ������� �� ������)*/
		int x[15], sum = 0, c = 0;

		for (int i = 0; i < 15;i++) {
			x[i] = -5 + rand() % 95;
		}

		for (int i = 0; i < 15;i++) {
			if (x[i] < 0) {
				goto rec;
			}
			else { goto bal; }


		}

	rec:
		for (int i = 0; i < 14; i++)
		{
			for (int j = 14; j > i; j--)
			{
				if (x[j - 1] < x[j])
				{
					int c = x[j - 1];
					x[j - 1] = x[j];
					x[j] = c;
				}
			}
		}
		for (int i = 0; i < 15;i++) {
			cout << x[i] << endl;
		}
		goto end;
	bal:
		for (int i = 0; i < 14; i++)
		{
			for (int j = 14; j > i; j--)
			{
				if (x[j - 1] > x[j])
				{
					int c = x[j - 1];
					x[j - 1] = x[j];
					x[j] = c;
				}
			}
		}
		for (int i = 0; i < 15;i++) {
			cout << x[i] << endl;
		}
	
	}

	else if (x == 4) {
	
	
	}

}

