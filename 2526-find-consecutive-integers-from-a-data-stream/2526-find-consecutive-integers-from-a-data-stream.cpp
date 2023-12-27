class DataStream {
public:
    vector <int> ip ;// nums array to store the value
    int k;
    int value;

    int i = 0 , j = 0 , count = 0;
    bool ans;

    DataStream(int value, int k) {
        this->value = value;
        this->k = k;
        
    }
    
    bool consec(int num) {

        ip.push_back(num);

        if (ip[j] == value)  count++;

        if (j-i+1 < k){
            j++;
            ans = false;
        }

        else if (j- i + 1 == k){

            if (count == k) ans = true;
            else ans = false;

            if (ip[i] == value) count--;
            i++;
            j++;
        }
        
        return ans;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */