#pragma once
#include <iostream>


struct Engine {
	int a;
	int b;
	explicit Engine(const int& a, const int& b) : a(a), b(b) {}
	inline int add() { return a + b; }
	inline int multiply() { return a * b; }
};
