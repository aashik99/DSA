//Brute
//First element goes to the last
//TC -> O(n) and SC -> O(1)
//Store the first element in a variable and then shift all the elements to the left and then place the first element at the end of the array.
//arr[i-1] = arr[i] and then arr[n-1] = firstElement
//For the algorithm to work SC -> O(n) is required as we need to store the first element in a variable and then place it at the end of the array.
//Extra space used is O(1) as we are using only one variable to store the first element.
#include <iostream>
using namespace std;
void leftRotateByOne(int arr[], int n) {
    int firstElement = arr[0]; // Store the first element
    for (int i = 1; i < n; i++) { // Shift elements to the left
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = firstElement; // Place the first element at the end
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotateByOne(arr, n);
    cout << "Array after left rotation by one: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}