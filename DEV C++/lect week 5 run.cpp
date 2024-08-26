#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sum;
	
	sum = 0;
	cout << "The value of sum is initially set to " << sum << endl;
	sum = sum + 96;
	cout << " sum is now " << sum << endl;
	sum = sum + 70;
	cout << " sum is now " << sum << endl;
	sum = sum + 85;
	cout << " sum is now " << sum << endl;
	sum = sum + 60;
	cout << " The final sum is " << sum << endl;
	
	double num1, num2, product;
	
	
	cin >> num1;
	cout << " Please type in another number: ";
	cin >> num2;
	product = num1 * num2;
	cout << num1 << " times " << num2 << " is " << product << endl;
	
	return 0;
}
