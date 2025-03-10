#include"util.h"

int main() {
	int size, a, b;
	int* pointer;
	char d;

	cout << "Input size of array ";
	cin >> size;

	if (size <= 0) {
		return -1;
	}

	cout << "Input range (from-to) you want to sort (a, b) ";
	cin >> a >> b;

	cout << "Input direction(a for increase, d for decrease): ";
	cin >> d;

	pointer = new int[size];

	init_random(pointer, size, -10, 10);

	cout << "Array: " << to_str(pointer, size) << endl;

	bubble_sort(pointer, size, a, b, d);

	cout << "Array after: " << to_str(pointer, size) << endl;
	delete[] pointer;
	return 0;
}

