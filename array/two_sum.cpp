class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int curr = 0; curr < nums.size(); curr++){
            for(int i = curr + 1; i < nums.size(); i++){
                if(nums[curr] + nums[i] == target){
                    return {curr, i};
                }
        }
        }
    return {};
    
    }
};