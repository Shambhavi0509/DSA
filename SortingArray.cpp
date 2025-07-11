#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    
    if (n == 1 || n == 0) {
        return true;
    }

    // If first element is greater than second, array is not sorted
    if (arr[0] > arr[1]) {
        return false;
    }

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
