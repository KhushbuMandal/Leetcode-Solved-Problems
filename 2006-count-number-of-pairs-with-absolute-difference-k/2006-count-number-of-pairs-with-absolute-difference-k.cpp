class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int , int> storefreq;
        int count = 0;

        for (int i = 0 ; i < nums.size() ; i++){
            int remaining = k + nums[i];
            if (storefreq.find(remaining) != storefreq.end()){
                count  += storefreq[remaining];
            }

            int remaining2 =  nums[i] - k;
            if (storefreq.find(remaining2) != storefreq.end()){
                count  += storefreq[remaining2];
            }

            storefreq[nums[i]]++;
        }

        return count;
    }
};