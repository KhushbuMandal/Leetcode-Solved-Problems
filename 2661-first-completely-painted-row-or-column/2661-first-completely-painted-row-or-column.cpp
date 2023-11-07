class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        int ans = INT_MAX;
        unordered_map <int , int> storeEleWithIndex;

        for (int i = 0; i < arr.size(); i++){
            storeEleWithIndex[arr[i]] = i;
        }

        for (int i = 0; i < n ; i++){
            int maxval = -1;
            for (int j = 0 ; j < m ; j++){
                maxval = max (maxval,storeEleWithIndex[mat[i][j]]);
            }

            ans  = min (ans , maxval);
        }

        for (int i = 0; i < m ; i++){
            int maxval = -1;
            for (int j = 0 ; j < n ; j++){
                maxval = max (maxval,storeEleWithIndex[mat[j][i]]);
            }

            ans  = min (ans , maxval);
        }

        return ans;
        
    }
};