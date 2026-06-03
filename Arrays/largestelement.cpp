//Largest element in an array
//Sort first and pick the last element
//TC -> O(nlogn) due to sorting
//Brute force solution

//Optimal solution -> O(n) -> Traverse the array and keep track of the largest element found so far
//largest =a[0] and move ahead.
//Once the iteration is over largest will have the largest element in the array


#include <iostream>
using namespace std;
int largestElement(int arr[], int n) {
    int largest = arr[0]; // Initialize largest to the first element
    for (int i = 1; i < n; i++) { // Start from the second element
        if (arr[i] > largest) { // If the current element is greater than largest
            largest = arr[i]; // Update largest
        }
    }
    return largest; // Return the largest element found
}
int main() {
    int arr[] = {3, 5, 7, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = largestElement(arr, n);
    cout << "The largest element in the array is: " << result << endl;
    return 0;
}

