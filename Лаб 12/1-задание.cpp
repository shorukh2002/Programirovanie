#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  m, d;
	cout << " ������� ����� ��� 1-31 "; cin >> d;
	cout << "�������   ����� ������ "; cin >> m; cout << endl;
	switch (d) {
	case 1: cout << " ������ "; break;
	case 2: cout << " ������ "; break;
	case 3: cout << " ������ "; break;
	case 4: cout << " �������� "; break;
	case 5: cout << " ����� "; break;
	case 6: cout << " ������ "; break;
	case 7: cout << " ������� "; break;
	case 8: cout << " ������� "; break;
	case 9: cout << " ������� "; break;
	case 10: cout << " ������� "; break;
	case 11: cout << " ���������� "; break;
	case 12: cout << " ����������� "; break;
	case 13: cout << " ����������� "; break;
	case 14: cout << " ������������� "; break;
	case 15: cout << " ����������� "; break;
	case 16: cout << " ������������ "; break;
	case 17: cout << " ����������� "; break;
	case 18: cout << " ������������� "; break;
	case 19: cout << " ������������� "; break;
	case 20: cout << " ��������� "; break;
	case 21: cout << " ������� ������ "; break;
	case 22: cout << " ������� ������ "; break;
	case 23: cout << " ������� ������ "; break;
	case 24: cout << " ������� �������� "; break;
	case 25: cout << " ������� ����� "; break;
	case 26: cout << " ������� ������ "; break;
	case 28: cout << " ������� ������� "; break;
	case 29: cout << " ������� ������� "; break;
	case 30: cout << " ��������� "; break;
	case 31: cout << " �������� ������ "; break;
	}
	switch (m) {
	case 1:cout << "������"; break;
	case 2:cout << "�������"; break;
	case 3:cout << " �����"; break;
	case 4:cout << " ������"; break;
	case 5:cout << " ���"; break;
	case 6:cout << " ����"; break;
	case 7:cout << " ����"; break;
	case 8:cout << " �������"; break;
	case 9:cout << " ��������"; break;
	case 10:cout << " �������"; break;
	case 11:cout << " ������"; break;
	case 12:cout << " �������"; break;
	}cout << endl;
}
