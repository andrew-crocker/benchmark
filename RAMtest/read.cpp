#include <iostream>
using namespace std;

#define MAX_ARR 104857600

int main() {
	char * arr = new char[MAX_ARR];
	for (int i = 0; i < MAX_ARR; ++i) {
		arr[i];
	}
	delete [] arr;
	return 0;
}