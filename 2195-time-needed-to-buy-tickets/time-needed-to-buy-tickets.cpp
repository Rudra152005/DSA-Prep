class Solution {
public:
    int timeRequiredToBuy(vector<int>& tic, int k) {
        int n = tic.size();
        queue<int> q;
        int cnt = 0;
        for(int i=0; i<n; i++){
            q.push(i);
        }
        while(!q.empty()){
            int pers = q.front();
            q.pop();
            tic[pers]--;
            cnt++;
            if(pers == k && tic[pers] == 0){
                return cnt;
            }
            if(tic[pers] > 0){
                q.push(pers);
            }
        }
        return cnt;
    }
};