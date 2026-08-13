class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n = card.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += card[i];
        }
        int minsum = 0;
        for(int i=0; i<n-k; i++){
            minsum += card[i];
        }
        int mins = minsum;
        for(int i=n-k; i<n; i++){
            minsum += card[i];
            minsum -= card[i - (n - k)];
            mins = min(mins, minsum);
        }
        return sum - mins;
    }
};