#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    if (n == 0)
	return 0;

    return sum_of_digits(n/10) + n%10;
}


/*
 * Precondition:
 * 	n is a natural number
 *
 * Postcondition:
 * 	returns the sum of the digits in one digit
*/
int reduccio_digits(int n) {
    int sum = sum_of_digits(n);

    if (sum < 10)
	return sum;

    return reduccio_digits(sum);
}


int main()
{
    int n;
    while (cin >> n) {
        cout << reduccio_digits(n) << endl;
    }
    return 0;
}
