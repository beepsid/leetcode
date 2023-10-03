// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> arr3;
//         int m=nums1.size();
//         int n=nums2.size();
//         int i=0;
//         int j=0;
//         while(i<m && j<n){
//             if(nums1[i] < nums2[j]){
//                 arr3.push_back(nums1[i]);
//                 i++;
//             }
//             else{
//                 arr3.push_back(nums2[j]);
//                 j++;
//             }
//         }
//         while(i < m){
//             arr3.push_back(nums1[i]);
//             i++;
//         }
//         while(j < n){
//             arr3.push_back(nums2[j]);
//             j++;
//         }

//         int t = m + n;
//         if(t % 2 == 1){
//             return arr3[t / 2];
//         }

//         return (arr3[t / 2] + arr3[t / 2 - 1]) / 2.0;
//     }
// };

#include <iostream>
#include <vector>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::vector<int> arr3;
    int m=nums1.size();
    int n=nums2.size();
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(nums1[i] < nums2[j]){
            arr3.push_back(nums1[i]);
            i++;
        }
        else{
            arr3.push_back(nums2[j]);
            j++;
        }
    }
    while(i < m){
        arr3.push_back(nums1[i]);
        i++;
    }
    while(j < n){
        arr3.push_back(nums2[j]);
        j++;
    }

    int t = m + n;
    if(t % 2 == 1){
        return arr3[t / 2];
    }

    return (arr3[t / 2] + arr3[t / 2 - 1]) / 2.0;
}

int main() {
    std::vector<int> nums1 = {1, 3, 5};
    std::vector<int> nums2 = {2, 4, 6, 8};

    double median = findMedianSortedArrays(nums1, nums2);

    std::cout << "The median is: " << median << std::endl;

    return 0;
}
