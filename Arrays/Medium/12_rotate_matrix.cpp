class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> resMatrix(matrix.size());
        resMatrix=matrix;
        for(int col=0;col<matrix.size();col++)
        {
            for(int row=0;row<matrix[col].size();row++)
            {
                matrix[col][matrix.size()-row-1] = resMatrix[row][col];
            }
        }
    }
};