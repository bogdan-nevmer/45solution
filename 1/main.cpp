#include "util.h"
#include "logic.h"


int main() {
	int* pointer;
	int size;

	cout << "input size of array";
	cin >> size;

	pointer = new int[size];

	init(pointer, size, -20, 20);
	cout << "array " <<convert(pointer,size) <<endl;

	return 0;
}