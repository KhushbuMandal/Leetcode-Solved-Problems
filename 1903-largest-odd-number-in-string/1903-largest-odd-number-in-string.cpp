class Solution {
public:
    string largestOddNumber(string num) {
        if (num.back() & 1) return num;
        int n = num.length() - 1;

        int i = n-1;
        while (i >= 0){

            if (num[i] & 1){
                return num.substr(0 , i+1);
            }
            i--;
        }
        return "";
    }
};