#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	class Liquid {
	public:
		string name;
		float ro;
		int a;
		int b;
		void Name() {
			cout << "Введiть нову назву рiдини: ";
			cin >> name;
		}
		void Ro() {
			cout << "Введiть нову густину рiдини: ";
			cin >> ro;
			cout << "Ви змiнили характеритики рiдини!!!" << endl;
		}
	};
	Liquid name;
	float variable;
	void Mol() {
		cout << "Введiть нову вiдносну кiлькiсть речовини: ";
		cin >> variable;
	}

	
};

int main() {

	setlocale(LC_ALL, "ru");

	Solution mol;
	Solution::Liquid name;
	int a;
	string b;
	float c;
	float d;
	cout << "Введiть назву, густину та вiдносну кiлькiсть речовини: " << endl;
	cout << "Назва: ";
	cin >> b ;
	cout << "Густина: ";
	cin >>c ;
	cout << "Вiдносна кiлькiсть речовини: ";
	cin >> d ;
	cout << "Чи бажаєте ви змiнити назву/густину або вiдносну клькiсть речовини?" << endl;
	cout << "1. Так" << endl;
	cout << "2. Нi" << endl;
	cin >> a ;
	if (a == 1)
	{
		name.Name();
		name.Ro();
		mol.Mol();
	}

	return 0;
}