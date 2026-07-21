class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> res(n, 0);
        for(int i=0; i<bookings.size(); i++){
            int l = bookings[i][0];
            int r = bookings[i][1];
            int val = bookings[i][2];

            res[l - 1] += val;
            if(r < n) res[r] -= val;
        }
        for(int i = 1; i<res.size(); i++){
            res[i] += res[i - 1];
        }
        return res;
    }
};