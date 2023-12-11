class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {

        int n = arr.size();
        map <int , int> mp; // store the freq of each ele

        for (int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }

        int quater = n / 4;

        for (auto x : mp){
            if (x.second > quater) return x.first;
           // cout << x.first;
        }
        
        return -1;
    }
};