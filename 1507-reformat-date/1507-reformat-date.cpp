class Solution {
public:
    string reformatDate(string date) {

        string ans = "";
        unordered_map <string , string> mp = {
            {"Jan" , "01"},
            {"Feb" , "02"},
            {"Mar" , "03"},
            {"Apr" , "04"},
            {"May" , "05"},
            {"Jun" , "06"},
            {"Jul" , "07"},
            {"Aug" , "08"},
            {"Sep" , "09"},
            {"Oct" , "10"},
            {"Nov" , "11"},
            {"Dec" , "12"},
        };

        
            string day = "";
            string month = "";
            string year = "";

            if (isdigit(date[1])){
                day = date.substr(0,2);
            }
            else {
                day = "0" + date.substr(0 , 1);
            }

            string monthName = date.substr (date.find(' ') + 1 , 3);
            month = mp[monthName];

            year = date.substr (date.rfind (' ')+1);

          return  ans = year + "-" + month + "-" + day;
        
        
    }
};