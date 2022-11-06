#include <iostream>
using namespace std;
#define g 9.81

int main() {
	int t;
	cout << "Flight time (sec): " ;
	cin >> t;
	float x = (t * t * g) / 2;

	cout << "Distance: " << x << "m" << endl;
	return 0;
}
