//Present in both
//Bruteforce
//Repeatation is allowed in the output array
//a1,a2
//In a2 check if it's already taken.
//visited array to check if the element is already taken or not


//for(i=0->n1-1)
//  for(j=0->n2-1)
//      if(a1[i] == a2[j] && visited[j] == false)
//          result.push_back(a1[i]);
//          visited[j] = true;
//      if(b[j] > a[i]) break; // As the arrays are sorted, if the current element of a2 is greater than the current element of a1, we can break the inner loop as there won't be any match for the current element of a1 in the remaining elements of a2.
//TC -> O(n1*n2) and SC -> O(n1) as we are using a visited array to store the elements of the second array and check if it's already taken or not
#include <iostream>
#include <vector>
using namespace std;
vector<int> intersectionOfSortedArrays(vector<int>& arr1, vector<int>& arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> result; // Vector to store the intersection of the two sorted arrays
    vector<bool> visited(n2, false); // Visited array to keep track of elements in arr2 that have been matched
    for (int i = 0; i < n1; i++) // Traverse through each element of arr1
    {
        for (int j = 0; j < n2; j++) // Traverse through each element of arr2
        {
            if (arr1[i] == arr2[j] && !visited[j]) // If a match is found and the element in arr2 has not been visited
            {
                result.push_back(arr1[i]); // Add the matching element to the result vector
                visited[j] = true; // Mark the element in arr2 as visited
                break; // Break the inner loop to move to the next element in arr1
            }
            if (arr2[j] > arr1[i]) // If the current element of arr2 is greater than the current element of arr1, break the inner loop
            {
                break;
            }
        }
    }
    return result; // Return the resulting vector containing the intersection of the two sorted arrays
}