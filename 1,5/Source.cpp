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
			cout << "����i�� ���� ����� �i����: ";
			cin >> name;
		}
		void Ro() {
			cout << "����i�� ���� ������� �i����: ";
			cin >> ro;
			cout << "�� ��i���� ������������� �i����!!!" << endl;
		}
	};
	Liquid name;
	float variable;
	void Mol() {
		cout << "����i�� ���� �i������ �i���i��� ��������: ";
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
	cout << "����i�� �����, ������� �� �i������ �i���i��� ��������: " << endl;
	cout << "�����: ";
	cin >> b ;
	cout << "�������: ";
	cin >>c ;
	cout << "�i������ �i���i��� ��������: ";
	cin >> d ;
	cout << "�� ������ �� ��i���� �����/������� ��� �i������ ����i��� ��������?" << endl;
	cout << "1. ���" << endl;
	cout << "2. �i" << endl;
	cin >> a ;
	if (a == 1)
	{
		name.Name();
		name.Ro();
		mol.Mol();
	}

	return 0;
}