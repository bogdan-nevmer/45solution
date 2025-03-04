#include "util.h"
#include "logic.h"

bool check_local_min(int* array, int size){
	bool local_min = false;
	if (size > 1 && (array[0] < array[1] || array[size - 1] < array[size - 2]));

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] < array[i - 1] &&
			array[i] < array[i + 1] ) {
			local_min = true;
		}
	}
	return local_min;
}




bool check_local_max(int* array, int size){
	if (size > 1 && (array[0] < array[1] || array[size - 1] > array[size - 2]));
	bool local_max = false;
	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1] && array[i] > array[i - 1]) {
			local_max = true;
		}
	}
	return local_max;
}
