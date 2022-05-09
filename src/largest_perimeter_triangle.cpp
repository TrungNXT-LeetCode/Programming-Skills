#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-3; i>=0; --i){
            if(nums[i+2]<nums[i+1]+nums[i]){
                return nums[i]+nums[i+1]+nums[i+2];    
            }
        }
    return 0;
    }
};

int main() {
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    cout << s.largestPerimeter(nums);
}