class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin() , nums.end() , greater<int>());

        return (nums[0]*nums[1]) - (nums[n-1] * nums[n-2]);
        
    }
};