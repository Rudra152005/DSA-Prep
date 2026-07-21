class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(), pairs.end(), [](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        } );


        int ans = 1;
        int lastend = pairs[0][1];
        for(int i=1; i<n; i++){
            if(lastend < pairs[i][0]){
                ans++;
                lastend = pairs[i][1];
            }
        }
        return ans;
    }
};