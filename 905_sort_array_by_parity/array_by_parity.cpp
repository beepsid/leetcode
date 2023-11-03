class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> oddnum;
        vector<int> evennum;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                evennum.push_back(nums[i]);
            }
            else{
                oddnum.push_back(nums[i]);
            }
        }
        ans.insert(ans.end(), evennum.begin(), evennum.end());
        ans.insert(ans.end(), oddnum.begin(), oddnum.end());
        return ans;
    }
};