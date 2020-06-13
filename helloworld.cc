#include <vector>
#include <iostream>

template<typename T>
void print(const T&& v) {
	std::cout << v << std::endl;
	// v = 10;
	/*
	for (auto e : v) {
		std::cout << e << std::endl;
	}
	*/
}

int main() {
	std::vector<int> v = {10, 100};
	//print({1, 2});
	// int i = 1;
	////print(i);
	// print(std::forward<int>(i));
	// std::cout << i << std::endl;
	
	// const int * const p = &i;
	// std::cout << *p << std::endl;

	return 0;
}
