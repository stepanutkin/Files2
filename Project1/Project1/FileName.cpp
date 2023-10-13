#include <iostream>
#include "Class.h"
#include <string>


void work(Counter& counter) {
	while (true == true) {
		char command;
		std::cout << "Input command ('+', '-', '=' or 'x'):";
		std::cin >> command;

		if (command == 'x') {
			std::cout << "Goodbye!";
			break;

		}

		switch (command)
		{
		case '+':counter.add(); break;
		case '-':counter.substr(); break;
		case '=':counter.print(); break;
		default:
			break;
		}
	}

}

int main() {

	std::string answer;
	std::cout << "Do you want to specify the initial value of the counter? Enter yes or no: ";
	std::cin >> answer;

	if (answer == "yes") {
		int x;
		std::cout << "Enter the initial counter value:";
		std::cin >> x;
		Counter counter(x);
		work(counter);
	}

	else {
		Counter counter;
		work(counter);
	}
	return 0;
}