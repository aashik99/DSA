//d is the place - Always do d%N
//Brute force
//Here d = 3
//temp[] = [1, 2, 3]
//Shift the elements to the left and then place the first d elements at the end of the array.
//TC -> O(n + d) and SC -> O(d) as we are using an extra array to store the first d elements of the array.
//For shifting the elements to the left we can do arr[i-d] = arr[i] and then for placing the first d elements at the end of the array we can do arr[n-d+i] = temp[i]
#include <iostream>
using namespace std;
void leftRotate(int arr[], int n, int d)
{
    d = d % n;
    int temp[d];
    for(int i=0; i< d; i++)
    {
        temp[i] = arr[i];
    }
    for(int i=d; i<n; i++)
    {
        arr[i-d] = arr[i];
    }
    for(int i=0; i<d; i++)
    {
        arr[n-d+i] = temp[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 20;

    leftRotate(arr, n, d);

    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

//Optimal solution
//