class Solution {
public:
    int longestPalindrome(vector<string>& words) {

        unordered_map <string , int> storeStringwithFreq;
        int len = 0;
        bool flag = 0;

        for (int i = 0; i < words.size() ; i++){
            storeStringwithFreq[words[i]]++;
        }

        for (int i = 0; i < words.size() ; i++){
            // 2 case
            // words[i][0] == words[i][1] and words[i][0] != words[i][1]

            if (words[i][0] != words[i][1]){ // lc and cl
                string s = "";
                s+=words[i][1];
                s+=words[i][0];

                if (storeStringwithFreq.find(s) != storeStringwithFreq.end()){
                    len += min (storeStringwithFreq[words[i]] , storeStringwithFreq[s]) * 4;
                }
                storeStringwithFreq.erase(s);
                storeStringwithFreq.erase(words[i]);
            }
            else if (words[i][0] == words[i][1]){
                int cnt = storeStringwithFreq[words[i]];

                if (cnt % 2 == 0){ // for even
                    len += cnt * 2;
                }
                else {
                    if (flag == 0){ // for odd
                        len += cnt * 2;

                        flag = 1;
                    }
                    else {
                        len += (cnt - 1)*2;
                    }
                }

                storeStringwithFreq.erase (words[i]);
                
            }
        }

        return len;
        
    }
};