//If an array i sorted
//Check the previous element with the current element, if they are not equal then return false - not sorted.
#include <iostream>
using namespace std;
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) { // Start from the second element
        if (arr[i] < arr[i - 1]) { // If the current element is less than the previous element
            return false; // The array is not sorted
        }
    }
    return true; // The array is sorted
} 
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}