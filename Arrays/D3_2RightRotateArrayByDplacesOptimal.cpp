#include <iostream>
using namespace std;
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void RightRotate(int arr[], int n, int d) {
    d = d % n; // Handle cases where d >= n
    reverse(arr, 0, n - 1); // Reverse the whole array
    reverse(arr, 0, d - 1); // Reverse the first d elements
    reverse(arr, d, n - 1); // Reverse the remaining n-d elements
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 1; // Number of places to rotate

    RightRotate(arr, n, d);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}