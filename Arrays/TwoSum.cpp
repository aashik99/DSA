#include <iostream>
#include <vector>
using namespace std;

int i, j;
vector<int> twoSum(vector<int>& nums, int target) 
{
    for(i=0; i<nums.size(); i++){
        for(j=i+1; j<nums.size(); j++){
            if(nums[i]+nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}
int main()
{
    int arr[10] = {2, 7, 11, 15};
    int target = 9;
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<int> result = twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}