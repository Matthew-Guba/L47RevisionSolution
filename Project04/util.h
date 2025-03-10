#pragma once
#include <iostream>
#include <string>
using namespace std;
void init_random(int* arr, int size, int minVal, int maxVal);
string to_str(int* arr, int size);
int count_local_minimum(int* arr, int size);
int count_local_maximum(int* arr, int size);