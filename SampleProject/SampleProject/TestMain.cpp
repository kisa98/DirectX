#include <iostream>

void EditInt(void* a);

int main() {
	std::cout << "Hello Graphics!" << std::endl;

	int k = 0;
	EditInt(&k);

	std::cout << k << std::endl;
}

void EditInt(void* a) {
	++(*(int*)a);
}