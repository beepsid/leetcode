class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>newl;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                newl.push_back(matrix[i][j]);
            }
        }
        for(int i=0;i<newl.size();i++){
            if(newl[i]==target){
                return true;
            }
        }
        return false;
    }
};