class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0;
        int n=x;
        if (x < 0)
           return false;

        while( x!=0 ){
           int digit = x%10;
           if ((reverse < INT_MIN/10) || (reverse > INT_MAX/10)){
               return false;
           }
           reverse = (reverse *10)+digit;
           x = x/10;
        }
        if( reverse == n ){
            return true;
        }
        else{
            return false;
        }
    }
};