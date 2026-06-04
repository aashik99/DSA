//If you hear the word unique - set datastructure.
//Bruteforce
//First pass
// set<int> st
//for i : n
//st.insert(arr[i])
//This takes TC -> O(n log n)

//index = 0 
//for auto it:st
//arr[index] = it
//index ++ 
//This takes TC ->O(n)
//SC - O(n)

//Optimal approach
//2 pointer approach
// Place in the next place if (i != j)
#include<iostream>
using namespace std;
#include<cstring>
#include<vector>
int RemoveDuplicates(vector<int> &arr, int n)
{
    int i = 0;
    for( int j=1;j<n; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    vector<int> vector = {1,1,1,2,2,2,2,3,3,4,4,4,4,6,6};
    int n = vector.size();
    int newSize = RemoveDuplicates(vector, n);
    for(int i = 0; i < newSize; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;       
}