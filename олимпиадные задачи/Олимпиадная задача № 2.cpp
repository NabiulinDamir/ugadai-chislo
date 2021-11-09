#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int randum = rand() % 100;
	int a, t = 0, k = 0;
	while ((k != 7) && (t == 0)) {
		cout << "Введите число от 1 до 100: ";
		cin >> a;
		k++;
		if (randum > a) {
			cout << "Загаданное число больше\n";
			cout << "Осталось попыток: " << 7 - k << endl;
		}
		if (randum < a) {
			cout << "Загаданное число меньше\n";
			cout << "Осталось попыток: " << 7 - k << endl;
		}
		if (randum == a) {
			t = 1;
			cout << "Угадали!!!!";
		}
	}
	if (t == 0) {
		cout << "Не угадали\n";
		cout << "Загаданное число: " << randum;
	}
}
