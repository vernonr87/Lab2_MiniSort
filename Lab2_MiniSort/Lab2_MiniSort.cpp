// the program attempts to sort three integers
// in increasing order, it is incomplete
// Mikhail Nesterenko
// 9/3/2009

#include <iostream>

using namespace std;

int main() {

	// inputs the numbers
	cout << "Enter three numbers: ";
	int one, two, three;
	cin >> one >> two >> three;

	int tmp;

	// orders one and two
	if (one > two) {
		tmp = one;
		one = two;
		two = tmp;
	}

	// orders two and three
	if (two > three) {
		tmp = two;
		two = three;
		three = tmp;
	}

	// orders one and two again (two may have changed from previous if statement)
	if (one > two) {
		tmp = one;
		one = two;
		two = tmp;
	}

	// outputs the sorted numbers
	cout << "The sorted numbers are: ";
	cout << one << " " << two << " " << three << endl;

	system("PAUSE");
	return 0;
}