#include"util.h"

int main() {
	int size;
	int* pointer;

	cout << "Input size of array ";
	cin >> size;

	if (size <= 0) {
		return -1;
	}

	pointer = new int[size];

	init_random(pointer, size, -10, 10);

	cout << "Array: " << to_str(pointer, size) << endl;

	cout << "Local maximum is: " << count_local_maximum(pointer, size) << endl;
	cout << "Local minimum is: " << count_local_minimum(pointer, size);

	delete[] pointer;
	return 0;
}

