class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i = 0; i<nums1.size();i++){
            arr.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            arr.push_back(nums2[j]);
        }
        sort(begin(arr),end(arr));
        int t = arr.size();
        if(t % 2 == 1){
            return arr[t / 2];
        }
        return (arr[t / 2] + arr[t / 2 - 1]) / 2.0;
    }
};