#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v(2);
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    v[0]=i;
                    v[1]=j;
                    return v;
                }
            }
        }

    }
};

int main() {
    Solution obj;    //class name is created
    vector<int> nums={2, 7, 11, 15};
    int target = 9;
    vector<int> result = obj.twoSum(nums, target);
    cout << " [";
    cout << result[0] << ", " << result[1] << "]";
    
    return 0;
}
