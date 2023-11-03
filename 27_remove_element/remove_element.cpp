class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> newl;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                newl.push_back(nums[i]);
            }
        }
        nums = newl;
        return nums.size();
    }
};