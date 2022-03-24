// Персональный шаблон проекта С++
#include <iostream>
#include <string>
#include "data.h"

using namespace std;

DB shopping = { "Shopping list" };

int main() {
	setlocale(LC_ALL, "Russian");
	

	string answer;

	do {
		cout << "Какую команду хотите выполнить?\n";
		cout << "Show\n";
		cout << "Add\n";
		cout << "Clear\n";
		cout << "Exit\n";
		cout << "Введите команду: ";
		getline(cin, answer);
		if (answer == "Show")
			show(shopping);
		else
			if (answer == "Add")
				addNote(shopping);
			else
				if (answer == "Clear")
					clearNotes(shopping);
				else
					if (answer == "Exit")
						cout << "Завершение работы программы...\n";
					else
						cout << "Команда не обнаружена\n";
		cout << endl;
	} while (answer != "Exit");

	
	
	


	return 0;
}