#include <iostream>
using namespace std;

int main() {
    // Loop from 1 to 15
    for (int i = 1; i <= 15; ++i) {
        // Check if the number is divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;  // For numbers divisible by both 3 and 5
        }
        // Check if the number is divisible by 3 only
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;  // For numbers divisible by 3
        }
        // Check if the number is divisible by 5 only
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;  // For numbers divisible by 5
        }
        // Otherwise, print the number itself
        else {
            cout << i << endl;  // For numbers not divisible by 3 or 5
        }
    }

    return 0;
}
