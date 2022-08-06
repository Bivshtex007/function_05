#include <iostream>
#include <cmath>
using namespace std;

// First funcion with just printing
void print_a(float a) {
	cout << a << endl;
}
// Second function with adding a and a
void add_a_plus_a(float a) {
	cout << "Number plus Number will be : " << a+a << endl;

}
// Third function with mult a and a
void mult_a_X_a(float a) {
	cout << "Number Mult by itseld will be : " << a*a << endl;
}

// Forth function with power of a^a
void pow_a(float a) {
	cout << "Number in power of itself will be: " << pow(a, a) << endl;
}

// Main function
int main() {

	float a;

cout << "Enter Number" << endl;
cin >> a;
cout << "You have entered: " << a << endl;

print_a(a);
add_a_plus_a(a);
mult_a_X_a(a);
pow_a(a);
return 0;

}