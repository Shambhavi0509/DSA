#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    // Base case: If array has 0 or 1 element, it's sorted
    if (n == 1 || n == 0) {
        return true;
    }

    // If first element is greater than second, array is not sorted
    if (arr[0] > arr[1]) {
        return false;
    }

    // Recursive call on the rest of the array
    return isSorted(arr + 1, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Change values to test
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is NOT sorted." << endl;
    }

    return 0;
}
