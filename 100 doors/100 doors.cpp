#include <iostream>
using namespace std;
int main() {
    const int totalDoors = 100;
    bool doors[totalDoors] = {false}; // false means closed, true means open

    // Toggling the doors
    for (int pass = 1; pass <= totalDoors; ++pass) {
        for (int door = pass - 1; door < totalDoors; door += pass) {
            doors[door] = !doors[door]; // Toggle the state
        }
    }

    // Printing the doors that remain open
    cout << "The doors that remain open are:\n";
    for (int i = 0; i < totalDoors; ++i) {
        if (doors[i]) {
           cout << i + 1 << " "; // Door numbers are 1-indexed
        }
    }
    cout << endl;

    return 0;
}
