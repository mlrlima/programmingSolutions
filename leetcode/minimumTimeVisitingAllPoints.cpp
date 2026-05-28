class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int t=0;
        int x=points[0][0], y=points[0][1];
        for(int i=1;i<points.size();i++){
            int distx=abs(x-points[i][0]);
            int disty=abs(y-points[i][1]);

            if(distx==disty) t+=distx;
            else if(distx>disty) t+=(disty+(distx-disty));
            else t+=(distx+(disty-distx));

            x=points[i][0];
            y=points[i][1];
        }

        return t;
    }
};
