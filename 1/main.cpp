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

	cout << "does local min " <<(check_local_min(pointer,size)?"yes":"no") << endl;

	cout << "does local max " << (check_local_max(pointer, size) ? "yes" : "no") << endl;

	return 0;
}