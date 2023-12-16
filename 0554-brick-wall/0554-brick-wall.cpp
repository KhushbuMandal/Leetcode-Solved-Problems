class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {

        int rows = wall.size();
        unordered_map <int,int> crack ; // no of cracks count of every row

        for (int row = 0 ; row < rows ; row++){
            int crackDistance = 0;

            for (int brick = 0 ; brick < wall[row].size() - 1; brick++){
                crackDistance += wall[row][brick];
                crack[crackDistance]++;
            } 

        }

        int mini = rows;
        //traverse the map and find maximum crack so that brick count become minimum
        for (auto it : crack){
            int crack_Distance = it.first;
            int noRowsHavingRows = it.second;

            mini = min (mini , rows - noRowsHavingRows);
        }

        return mini;
        
    }
};