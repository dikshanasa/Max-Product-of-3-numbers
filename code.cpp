#include<bits/stdc++.h>
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int maxPro=INT_MIN;
        sort(nums.begin(),nums.end());
        maxPro=max(maxPro,nums[0]*nums[1]*nums[n-1]);
        maxPro=max(maxPro,nums[n-3]*nums[n-2]*nums[n-1]);
        return maxPro;
    }
};
