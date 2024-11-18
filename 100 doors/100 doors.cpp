#include <iostream>
using namespace std;

void toggleDoors(int totalDoors, int passes) {
    // Array to track the state of doors (false means closed, true means open)
    bool doors[totalDoors] = {false};

    // Perform the toggling for each pass
    for (int pass = 1; pass <= passes; ++pass) {
        for (int door = pass - 1; door < totalDoors; door += pass) {
            doors[door] = !doors[door]; // Toggle the door state
        }
    }
    // Print the doors that remain open
    cout << "The doors that remain open are:\n";
    for (int i = 0; i < totalDoors; ++i) {
        if (doors[i]) {
            cout << i + 1 << " "; // Doors are 1-indexed, so print i + 1
        }
    }
    cout << endl;
}

int main() {
    const int totalDoors = 12; // Number of doors
    const int passes = 3;      // Number of passes to make

    // Call the function to toggle doors and display the result
    toggleDoors(totalDoors, passes);
    return 0;
}
