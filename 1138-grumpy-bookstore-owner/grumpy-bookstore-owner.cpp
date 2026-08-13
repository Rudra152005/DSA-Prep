class Solution {
public:
    int maxSatisfied(vector<int>& cust, vector<int>& grum, int mint) {
        int n = grum.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            if(grum[i] == 0){
                sum += cust[i];
            }
        }
        for(int i=0; i<mint; i++){
            if(grum[i] == 1){
                sum += cust[i];
            }
        }
        int maxsum = sum;
        for(int i=mint; i<n; i++){
            if(grum[i] == 1){
                sum += cust[i];
            }
            if(grum[i - mint] == 1){
                sum -= cust[i - mint];
            }
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};