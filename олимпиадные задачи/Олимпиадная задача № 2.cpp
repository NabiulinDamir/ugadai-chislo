#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int randum = rand() % 100;
	int a, t = 0, k = 0;
	while ((k != 7) && (t == 0)) {
		cout << "������� ����� �� 1 �� 100: ";
		cin >> a;
		k++;
		if (randum > a) {
			cout << "���������� ����� ������\n";
			cout << "�������� �������: " << 7 - k << endl;
		}
		if (randum < a) {
			cout << "���������� ����� ������\n";
			cout << "�������� �������: " << 7 - k << endl;
		}
		if (randum == a) {
			t = 1;
			cout << "�������!!!!";
		}
	}
	if (t == 0) {
		cout << "�� �������\n";
		cout << "���������� �����: " << randum;
	}
}
