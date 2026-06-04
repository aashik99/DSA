//Second largest element in an array
//TC -> O(nlogn + O(n)) -> O(nlogn) due to sorting
//Brute force solution
//Check if n-2 element is not equal to n-1 element, if not then return n-2 element else return n-3 element
//Then break.

//Optimal solution -> O(n) -> Traverse the array and keep track of the largest and second largest element found so far
//largest = a[0] and secondLargest = INT_MIN and move ahead.
//Once the iteration is over secondLargest will have the second largest element in the array

#include <iostream>
#include <climits>
using namespace std;
int secondLargestElement(int arr[], int n) {
    int largest = arr[0]; // Initialize largest to the first element
    int secondLargest = INT_MIN; // Initialize secondLargest to the smallest integer
    for (int i = 1; i < n; i++) { // Start from the second element
        if (arr[i] > largest) { // If the current element is greater than largest
            secondLargest = largest; // Update secondLargest to the old largest
            largest = arr[i]; // Update largest to the current element
        } else if (arr[i] > secondLargest && arr[i] != largest) { // If the current element is greater than secondLargest and not equal to largest
            secondLargest = arr[i]; // Update secondLargest to the current element
        }
    }
    return secondLargest; // Return the second largest element found
}
int main() {
    int arr[] = {3, 5, 7, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = secondLargestElement(arr, n);
    cout << "The second largest element in the array is: " << result << endl;
    return 0;
}
