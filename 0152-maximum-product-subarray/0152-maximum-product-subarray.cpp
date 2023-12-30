class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int pref = 1;
        int suff = 1;
        int maxProduct = INT_MIN;

        for (int i = 0 ; i < n ; i++){
            if (pref == 0){
                pref = 1;
            }

            if (suff == 0){
                suff = 1;
            }

            pref = pref* nums[i];
            suff = suff* nums[n-1-i];

            maxProduct = max (maxProduct , max (pref, suff));
        }
        return maxProduct;
       
    }
};