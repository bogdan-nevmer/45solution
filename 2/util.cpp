#include "util.h"


string convert(int* array, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}
	return s;
}

void init(int* array, int a, int b, int size) {
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % (b - a + 1) + a;
		//array[i] = rand() % (b - a + 1) + a;
	}
}