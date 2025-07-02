#include <iostream>
using namespace std;

// Recursive binary search function
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;  // Base case: element not found
    }

    int mid = left + (right - left) / 2;

    // If the element is found at mid
    if (arr[mid] == target) {
        return mid;
    }

    // If the element is smaller than mid, search in left half
    if (target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    }

    // If the element is greater than mid, search in right half
    return binarySearch(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
