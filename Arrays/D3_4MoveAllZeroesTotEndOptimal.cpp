//We do something similar to 2 poiter approach but here we will maintain a pointer for non zero element and we will swap it with zero element
//TC -> O(n) and SC -> O(1) as we are not using any extra space to store the elements of the array.

//Move the zero and swap with non zero element and move the non zero element to the left and zero to the right

//Step - 1 Find first zeroth element and maintain a pointer for that
//Step - 2 Iterate through the array and if you find a non zero element then swap
#include <iostream>
#include <vector>
using namespace std;
vector<int> moveZeroes(int n, vector<int> a)
{
    int nonZeroIndex = 0; // Pointer to track the position of the next non-zero element
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[nonZeroIndex], a[i]); // Swap the non-zero element with the element at nonZeroIndex
            nonZeroIndex++; // Move the nonZeroIndex to the next position
        }
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> result = moveZeroes(n, a);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
