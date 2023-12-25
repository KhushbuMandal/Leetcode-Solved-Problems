class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        vector <int> ans;

        vector <int> prefix(words.size() , 0); // store the number of strings containing the first and last char as vowel till the ith index
        
        for (int i = 0 ; i < words.size() ; i++){

            int n = words[i].size();

            if ((words[i][0] == 'a' || words[i][0] == 'e'||  words[i][0] == 'i' || words[i][0] == 'o'||  words[i][0] == 'u') && 
            (words[i][n-1] == 'a' || words[i][n-1] == 'e'||  words[i][n-1] == 'i' || words[i][n-1] == 'o'||  words[i][n-1] == 'u')){
                if (i == 0){
                    prefix[0] = 1;
                }else {
                    prefix[i] = prefix[i-1] + 1;
                }
            }else {
                if (i == 0){
                    prefix[0] = 0;
                }else {
                    prefix[i] = prefix[i-1];
                }
            }
        }

        for (int i = 0 ; i < queries.size() ; i++){
            int start = queries[i][0];
            int end = queries[i][1];

            if (start - 1 < 0){
                ans.push_back (prefix[end]);
            }else {
                ans.push_back(prefix[end] - prefix[start-1]);
            }


        }
        return ans;
    }
};