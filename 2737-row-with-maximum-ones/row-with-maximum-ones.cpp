class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rowind = 0;
        int maxones = 0;
        for(int i=0; i<mat.size(); i++){
            int count = 0;
            for(int j =0; j<mat[0].size(); j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > maxones){
                maxones = count;
                rowind = i;
            }
        }
        return {rowind, maxones};
    }
};