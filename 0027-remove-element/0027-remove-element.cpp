class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int j = 0;

        for(int a : nums ){
            if (a != val){
                nums[j]=a;
                j++;
            }
        }
        
        return j;
        
    }
};