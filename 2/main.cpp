#include "util.h"
#include "logic.h"


int main() {
	int* pointer;
	int size;

	cout << "input size of array";
	cin >> size;

	pointer = new int[size];

	init(pointer, size, -20, 20);
	cout << "array " << convert(pointer, size) << endl;

	int count;
	int* indices = get_local_min_indices(pointer, size , &count);
	
	cout << "array " << convert(indices,count) << endl;

	delete[] pointer;

	return 0;
}