#include <iostream>
#include <cstdlib>
using namespace std;

int fibonacci(int num) {
	if (num > 1) {
		return fibonacci(num-1) + fibonacci(num-2);
	}
	else if (num == 1) {
		return 1;
	}
	else if (num == 0) {
		return 0;
	}
	else {
		cout << "Error: Can't do fibonacci of negative number." << endl;
		exit(0);
	}
}

int main(int argc, char ** argv) {
	cout << "fibonacci(" << atoi(argv[1]) << ") = " << fibonacci(atoi(argv[1])) << endl;
	return 0;
}