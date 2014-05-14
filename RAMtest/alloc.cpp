#include <iostream>
using namespace std;

#define MAX_ARR 104857600

int main() {
	char * arr = new char[MAX_ARR];

	delete [] arr;
	return 0;
}