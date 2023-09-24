class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set <vector <int>> ans;
        vector <vector <int>> output;
        sort(nums.begin() ,nums.end());
        int n = nums.size();

        for (int i = 0; i < n-3; i++){
            for (int j = i+1 ; j < n-2 ; j++){
                int left = j + 1;
                int right = n - 1;

                while (left < right){
                   long long int  sum = (long long) nums[i] + (long long) nums[j] + (long long) nums[left] + (long long) nums[right];

                    if (sum == target) {
                        ans.insert({nums[i] , nums[j] , nums[left] , nums[right]});
                        left++;
                        right--;
                    }
                    else if (sum < target){
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        for (auto quadruplets : ans){
            output.push_back(quadruplets);
        }
        
        return output;
        
    }
};