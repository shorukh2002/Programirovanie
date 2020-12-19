#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int  y;
	cout << " Введите целое число в диапазоне 10-40 "; cin >> y;
	switch (y) {
	case 10: cout << " десят учебных заданий"; break;
	case 11: cout << "одинадцать  учебных заданий"; break;
	case 12: cout << " двенадцать  учебных заданий"; break;
	case 13: cout << " тринадцать учебных заданий"; break;
	case 14: cout << " четирнадцать учебных заданий"; break;
	case 15: cout << " пятнадцать учебных заданий"; break;
	case 16: cout << "шестнадцать учебных заданий"; break;
	case 17: cout << "семнадцать учебных заданий"; break;
	case 18: cout << "восемнадцать учебных заданий"; break;
	case 19: cout << "девятнадцать учебных заданий"; break;
	case 20: cout << "двадцать учебных заданий"; break;
	case 21: cout << "двадцать один учебных заданий"; break;
	case 22: cout << "двадцать два учебных заданий"; break;
	case 23: cout << "двадцать три учебных заданий"; break;
	case 24: cout << "двадцать четыри учебных заданий"; break;
	case 25: cout << "двадцать пят учебных заданий"; break;
	case 26:cout << "двадцать шесть учебных заданий"; break;
	case 27: cout << "двадцать семь учебных заданий"; break;
	case 28:cout << "двадцать восемь учебных заданий"; break;
	case 29: cout << "двадцать девять учебных заданий"; break;
	case 30: cout << "тридцать учебных заданий"; break;
	case 31: cout << "тридцать один учебных заданий"; break;
	case 32: cout << "тридцать два учебных заданий"; break;
	case 33: cout << "тридцать три учебных заданий"; break;
	case 34:cout << "тридцать четыри учебных заданий"; break;
	case 35: cout << "тридцать пят учебных заданий"; break;
	case 36: cout << "тридцать шест учебных заданий"; break;
	case 37: cout << "тридцать семь учебных заданий"; break;
	case 38: cout << "тридцать восемь учебных заданий"; break;
	case 39:cout << "тридцать девят учебных заданий"; break;
	case 40:cout << "сорок учебных заданий"; break;
	default:cout << " Данное число нет в диапазонах  "; break;
	}

