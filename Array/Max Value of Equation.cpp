class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& v, int k) {
        int n = v.size();
        int ans = INT_MIN;
        int sum;
        priority_queue<vector<int>> pq;
        pq.push({v[0][1]-v[0][0], v[0][0]});
        for (int i = 1; i < n; i++) {
            sum = v[i][0] + v[i][1];
            while(!pq.empty() && v[i][0] - pq.top()[1] > k) pq.pop();
            if(!pq.empty()) ans = max(ans,sum+pq.top()[0]);

            pq.push({v[i][1]-v[i][0], v[i][0]});
        }

        return ans;
    }
};