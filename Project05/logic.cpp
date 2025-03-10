#include"util.h"

void bubble_sort(int* arr, int n, int a, int b, char direction) {
	if (a > b) swap(a, b);

	a = max(1, a);
	b = min(n, b);

	for (int i = a - 1; i < b - 1; i++) {
		for (int j = a - 1; j < b - 1 - (i - (a - 1)); j++) {
			if ((direction == 'a' && arr[j] > arr[j + 1]) ||
				(direction == 'd' && arr[j] < arr[j + 1])) {

				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}