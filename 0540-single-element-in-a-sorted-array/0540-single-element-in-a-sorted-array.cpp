class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;

        while  (start < end){
            int mid = (start + end) / 2;

            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid-1])){
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }

        return nums[start]; // becoz it will break as soon as start == end so we can also return nums[end]
        
    }
};