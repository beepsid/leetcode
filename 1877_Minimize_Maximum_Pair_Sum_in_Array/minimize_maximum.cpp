class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int max_ele=0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int a = 0;
        int b = n-1;
        int store=0;

        while (a<=b){
            store=nums[a]+nums[b];
            max_ele=max(max_ele, store);
            a++;
            b--;
        }
        return max_ele;
    }
};