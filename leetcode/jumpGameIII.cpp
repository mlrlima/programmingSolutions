class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<int> q; //queue
        q.push_back(start);
        map<int, bool> m;

        while(q.size()>0){
            int i=q[q.size()-1];
            q.pop_back();
            m[i]=true;

            if(arr[i]==0) return true;

            if(i+arr[i] < arr.size() && m.find(i+arr[i])==m.end()) q.push_back(i+arr[i]);
            if(i-arr[i]>=0 && m.find(i-arr[i])==m.end()) q.push_back(i-arr[i]);

        }

        return false;

    }
};
