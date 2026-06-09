//Move all zeroes to the end of the array while maintaining the relative order of the non-zero elements.
//Brute Force - First iterate and fill non-zero number, then fill zeroes in the remaining places.
//TC -> O(2n) and SC -> O(x) as we are not using any extra space to store the elements of the array.
#include <iostream>
#include<cstring>
#include<vector>
using namespace std;
vector<int> moveZeroes(int n, vector<int> a)
{
    vector<int> temp;
    for (int i=0; i<n; i++)
        {
            if(a[i] != 0)
                temp.push_back(a[i]);
        }
    int nz = temp.size();
    for (int i=0; i<nz; i++)
        {
            a[i] = temp[i];
        }
    for(int i=nz; i<n; i++)
        {
            a[i] = 0;
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