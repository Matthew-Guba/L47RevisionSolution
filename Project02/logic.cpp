#include "util.h"
double avg_of_non_zero_items(int* arr, int size) {
	double sum = 0;
	double count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] != 0) {
			sum += abs(arr[i]);
			count++;
		}
	}
	return sum / count;
}