class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();

        for (int i = 0 ; i < n ; i++){
            if (nums[i] % 2 == 0){
                nums[i] = 0;
            }
            else nums[i] = 1;
        }

        unordered_map <int , int > mp; // store the sum with freq

        int sum = 0;
        int count = 0;

        for (int i = 0; i < n ;i++){
            sum += nums[i];

            if (sum == k) count++; //same as all prefix sum concept

            if (mp.find (sum-k) != mp.end()){
                count += mp[sum-k];
            }

            mp[sum]++;
        }

        return count;
        
    }
};