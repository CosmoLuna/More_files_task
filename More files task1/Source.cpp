// ������������ ������ ������� �++
#include <iostream>
#include <string>
#include "data.h"

using namespace std;

DB shopping = { "Shopping list" };

int main() {
	setlocale(LC_ALL, "Russian");
	

	string answer;

	do {
		cout << "����� ������� ������ ���������?\n";
		cout << "Show\n";
		cout << "Add\n";
		cout << "Clear\n";
		cout << "Exit\n";
		cout << "������� �������: ";
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
						cout << "���������� ������ ���������...\n";
					else
						cout << "������� �� ����������\n";
		cout << endl;
	} while (answer != "Exit");

	
	
	


	return 0;
}