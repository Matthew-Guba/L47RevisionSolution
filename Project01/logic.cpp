#include"util.h"
int find_max_index(int* array, int size) {
    int max_index = 0;
    for (int i = 1; i < size; ++i) {
        if (abs(array[i]) > abs(array[max_index])) {
            max_index = i;
        }
    }
    return max_index;
}
int find_min_index(int* array, int size) {
    int min_index = 0;
    for (int i = 1; i < size; ++i) {
        if (abs(array[i]) < abs(array[min_index])) {
            min_index = i;
        }
    }
    return min_index;
}
int sum_min_max(int min_index, int max_index, int* array) {
    int sum = 0;
    if (min_index > max_index) {
        swap(min_index, max_index);
    }

    for (int i = min_index + 1; i < max_index; i++) {
        sum += array[i];
    }

    return sum;
}