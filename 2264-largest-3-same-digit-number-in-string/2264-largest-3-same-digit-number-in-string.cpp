class Solution {
public:
    string largestGoodInteger(string nums) {

       int n = nums.size();
       int digit = -1; // becoz we have to take 000 as alsoo good string so intead of 0 take as 1
       string ans = "";

       for (int i = 2 ; i < n ; i++){

           if (nums[i] == nums[i-1] && nums[i] == nums[i-2] && nums[i] - '0' > digit){
               ans = nums.substr(i-2 , 3);
               digit = nums[i] - '0';
           }
       }

       return ans;
        
    }
};