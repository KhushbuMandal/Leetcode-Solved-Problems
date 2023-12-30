class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map <int , int> mp; //to store the char and its frequency

        //Hum map me har char ko store kr rhe hai
        for (auto word : words){
            for (auto ch : word){
                mp[ch]++;
            }
        }

        int n = words.size();
        // agr char n se divide ho jaye matlab hum eually divide kr sakte h
        for (auto i : mp){

           // if (i.second % n != 0) return false;

            if (i.second % n == 0)continue;
            else return false;
        }

        return true; // return true;
        
    }
};