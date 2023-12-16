class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int prefixSum = 0;

        unordered_map <int , int> firstOccurence; // store prefixSum % k with its first Occiurence

        for (int i = 0; i < n ; i++){

            prefixSum += nums[i];

            if((prefixSum % k) == 0 and i + 1 >= 2) return true;

            if (firstOccurence.find(prefixSum % k) != firstOccurence.end()){
                if (i - firstOccurence[prefixSum % k] >= 2) return true;
            }

            else firstOccurence[prefixSum % k] = i;

        }
        
        return false;
    }
};