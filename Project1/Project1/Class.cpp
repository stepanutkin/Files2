#include "Class.h"
#include <iostream>

int Counter::add() {
	return ++this->counter;
}
int Counter::substr() {
	return --this->counter;
}
void Counter::print() {
	std::cout << counter << std::endl;
}

Counter::Counter() {
	this->counter = 1;
}

Counter::Counter(int num) {
	this->counter = num;
}
