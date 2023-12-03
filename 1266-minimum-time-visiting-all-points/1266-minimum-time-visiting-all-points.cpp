class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int TotalTime = 0;
        int time = 0;
        
        for(int i = 1; i < n; i++){
            int xdiff = abs(points[i][1] - points[i-1][1]);
            int ydiff = abs(points[i][0] - points[i-1][0]);

            if(xdiff > ydiff)   time = xdiff;
            else  time = ydiff;

            TotalTime = TotalTime + time;
        }
        return TotalTime;
    }
};