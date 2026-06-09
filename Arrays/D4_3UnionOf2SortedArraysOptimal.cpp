//union of 2 sorted arrays
//Keep i pointer on the fist element on fist array and j pointer on first element of second array 
//and compare the elements and insert the smaller element in the result vector
// and move the pointer of that array and if both elements are same 
//then insert any one element in the result vector and move both pointers.

//TC -> O(n+m) and SC -> O(n+m) as we are using a vector to store the elements of both arrays 
//and then converting it to vector.
#include <iostream>
#include <vector>
using namespace std;
vector<int> unionOfSortedArrays(vector<int>& arr1, vector<int>& arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> result; // Vector to store the union of the two sorted arrays
    int i = 0, j = 0; // Pointers for arr1 and arr2
    while (i < n1 && j < n2) // Traverse both arrays until we reach the end of either array
    {
        if (arr1[i] < arr2[j]) // If the current element of arr1 is smaller than the current element of arr2
        {
            if (result.empty() || result.back() != arr1[i]) // Check for duplicates before adding to result
            {
                result.push_back(arr1[i]); // Add the smaller element to the result vector
            }
            i++; // Move the pointer of arr1
        }
        else if (arr1[i] > arr2[j]) // If the current element of arr2 is smaller than the current element of arr1
        {
            if (result.empty() || result.back() != arr2[j]) // Check for duplicates before adding to result
            {
                result.push_back(arr2[j]); // Add the smaller element to the result vector
            }
            j++; // Move the pointer of arr2
        }
        else // If both elements are equal
        {
            if (result.empty() || result.back() != arr1[i]) // Check for duplicates before adding to result
            {
                result.push_back(arr1[i]); // Add any one of the equal elements to the result vector
            }
            i++; // Move both pointers as both elements are same
            j++;
        }
    }
    while (i < n1) // If there are remaining elements in arr1, add them to result
    {
        if (result.empty() || result.back() != arr1[i]) // Check for duplicates before adding to result
        {
            result.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2) // If there are remaining elements in arr2, add them to result
    {
        if (result.empty() || result.back() != arr2[j]) // Check for duplicates before adding to result
        {
            result.push_back(arr2[j]);
        }
        j++;
    }
    return result; // Return the resulting vector containing the union of the two sorted arrays
}