#include <iostream>
using namespace std;

int totalPoints(int points[], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        if (i < 3) {
            // For the first three quarters, each field goal made is worth 2 points
            total += points[i] * 2;
        } else {
            // For the last quarter, each field goal made is worth 3 points
            total += points[i] * 3;
        }
    }
    return total;
}

int main() {
    // Test cases
    int points1[] = {10, 15, 12, 8};
    int size1 = sizeof(points1) / sizeof(points1[0]);
    cout << "Total points for points1: " << totalPoints(points1, size1) << endl;

    int points2[] = {3, 5, 6, 7};
    int size2 = sizeof(points2) / sizeof(points2[0]);
    cout << "Total points for points2: " << totalPoints(points2, size2) << endl;

    return 0;
}
