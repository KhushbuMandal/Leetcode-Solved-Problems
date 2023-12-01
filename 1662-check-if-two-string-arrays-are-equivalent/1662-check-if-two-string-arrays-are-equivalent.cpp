class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 , w2;
        for (auto s1 : word1){
            w1 += s1;
        }

        for (auto s2 : word2){
            w2 += s2;
        }
        int i = 0 , j = 0;
        int n = w1.size();
        int m = w2.size();
        while(i < n || j < m){
            if (w1[i] != w2[j]) return false;
            i++;
            j++;
        }
        return true;
    }
};