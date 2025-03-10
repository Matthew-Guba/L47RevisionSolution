#pragma once
#include <iostream>
#include <string>
using namespace std;
void init_random(int* arr, int size, int minVal, int maxVal);
string to_str(int* arr, int size);
int find_max_index(int* arr, int size);
int find_min_index(int* arr, int size);
int sum_of_not_extreme_elements(int* arr, int size);