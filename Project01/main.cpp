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

	cout << "Sum is: " << sum_min_max(find_min_index(pointer, size), find_max_index(pointer, size), pointer) << endl;

	delete[] pointer;
	return 0;
}

