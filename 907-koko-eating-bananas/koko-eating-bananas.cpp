class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int ans = r;
        while(l<=r){
            int mid = l + (r - l)/2;
            long long hour = 0;
            for(int num : piles){
                hour += (num + mid - 1)/mid;
                if(hour > h) break;
            }
            if(hour<= h){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};