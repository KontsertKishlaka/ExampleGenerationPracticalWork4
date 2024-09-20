#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");

	// Объявление и инициализация констант-множителей
	const int multiplier1 = 1;
	const int multiplier2 = 2;
	const int multiplier3 = 3;
	const int multiplier4 = 4;
	const int multiplier5 = 5;
	const int multiplier6 = 6;
	const int multiplier7 = 7;
	const int multiplier8 = 8;
	const int multiplier9 = 9;

	// Объявляем переменную, в которую пользователь будет вводить ответ на примеры
	int userAnswer;

	// Пользователь вводит произвольное число
	cout << "Введите число: ";
	int userNumber;
	cin >> userNumber;

	// Просим пользователя решить пример и ввести его ответ
	cout << "\n\nРешите пример №1: \x1b[95m" << userNumber << "*" << multiplier1 << "\x1b[0m\n\n";
	cin >> userAnswer;

	// Проверяем пример
	if (userAnswer == multiplier1 * userNumber)
		cout << "\nПравильно! Идём дальше.\n\n";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!"; // Если пользователь ошибся, информируем его об этом и закрываем программу.
		int _; cin >> _;
		return 0;
	}

	cout << "Решите пример №2: \x1b[95m" << userNumber << "*" << multiplier2 << "\x1b[0m\n\n";
	cin >> userAnswer;

	if (userAnswer == multiplier2 * userNumber)
		cout << "\nПравильно! Идём дальше.\n\n";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!";
		int _; cin >> _;
		return 0;
	}

	cout << "Решите пример №3: \x1b[95m" << userNumber << "*" << multiplier3 << "\x1b[0m\n\n";
	cin >> userAnswer;

	if (userAnswer == multiplier3 * userNumber)
		cout << "\nПравильно! Идём дальше.\n\n";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!";
		int _; cin >> _;
		return 0;
	}

	cout << "Решите пример №4: \x1b[95m" << userNumber << "*" << multiplier4 << "\x1b[0m\n\n";
	cin >> userAnswer;

	if (userAnswer == multiplier4 * userNumber)
		cout << "\nПравильно! Идём дальше.\n\n";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!";
		int _; cin >> _;
		return 0;
	}

	cout << "Решите пример №5: \x1b[95m" << userNumber << "*" << multiplier5 << "\x1b[0m\n\n";
	cin >> userAnswer;

	if (userAnswer == multiplier5 * userNumber)
		cout << "\nПравильно! Идём дальше.\n\n";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!";
		int _; cin >> _;
		return 0;
	}

	cout << "Решите пример №6: \x1b[95m" << userNumber << "*" << multiplier6 << "\x1b[0m\n\n";
	cin >> userAnswer;

	if (userAnswer == multiplier6 * userNumber)
		cout << "\nПравильно! Идём дальше.\n\n";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!";
		int _; cin >> _;
		return 0;
	}

	cout << "Решите пример №7: \x1b[95m" << userNumber << "*" << multiplier7 << "\x1b[0m\n\n";
	cin >> userAnswer;

	if (userAnswer == multiplier7 * userNumber)
		cout << "\nПравильно! Идём дальше.\n\n";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!"; 
		int _; cin >> _;
		return 0;
	}

	cout << "Решите пример №8: \x1b[95m" << userNumber << "*" << multiplier8 << "\x1b[0m\n\n";
	cin >> userAnswer;

	if (userAnswer == multiplier8 * userNumber)
		cout << "\nПравильно! Идём дальше.\n\n";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!";
		int _; cin >> _;
		return 0;
	}

	cout << "Решите пример №9: \x1b[95m" << userNumber << "*" << multiplier9 << "\x1b[0m\n\n";
	cin >> userAnswer;

	if (userAnswer == multiplier9 * userNumber)
		cout << "\n\x1b[92mПримеры решены, поздравляем!\x1b[0m";
	else {
		cout << "\x1b[95mОшибка\x1b[0m, пример решен неверно!";
		int _; cin >> _;
		return 0;
	}

	int _; cin >> _;
	return 0;
}