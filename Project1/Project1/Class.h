#pragma once
class Counter {
private:
	int counter;

public:
	int add();
	int substr();
	void print();

	Counter() {
		this->counter = 1;
	}

	Counter(int num) {
		this->counter = num;
	}

};