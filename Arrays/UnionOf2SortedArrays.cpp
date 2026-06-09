//union of 2 sorted arrays
//No duplicates in the output array
//BruteForce - Iterate through both arrays and insert the elements in a set to avoid duplicates and then convert the set to vector and return it.
//TC -> O(n+m) and SC -> O(n+m) as we are using a set to store the elements of both arrays and then converting it to vector.
//set will automatically handle the duplicates and maintain the sorted order of the elements.
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> unionOfSortedArrays(vector<int>& arr1, vector<int>& arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> s; // Set to store unique elements
    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]); // Insert elements of arr1 into the set
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]); // Insert elements of arr2 into the set
    }
    vector<int> result(s.begin(), s.end()); // Convert the set to a vector
    return result; // Return the resulting vector containing the union of the two sorted arrays
}
int main()
{
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: ";