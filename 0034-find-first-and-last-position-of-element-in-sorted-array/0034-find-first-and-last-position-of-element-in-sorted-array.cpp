class Solution {
public:

    int firstOccurence (vector<int>& nums,int n, int target){
        int start = 0;
        int end = n-1;
        int first = -1;

        while (start <= end){
            int mid = (start + end) / 2;

            if (nums[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if (nums[mid] < target){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return first;

    }

    int lastOccurence (vector<int>& nums,int n , int target){
        int start = 0;
        int end = n - 1;
        int last = -1;

        while (start <= end){
            int mid = (start + end) / 2;

            if (nums[mid] == target){
                last = mid;
                start = mid + 1;
            }
            else if (nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> firstAndLast ;

        int firstOccur = firstOccurence (nums , n , target);
        int lastOccur = lastOccurence (nums , n , target);

       // return {firstOccurence , lastOccurence};
       firstAndLast.push_back(firstOccur);
       firstAndLast.push_back(lastOccur);


       return firstAndLast;

       
        
    }
};