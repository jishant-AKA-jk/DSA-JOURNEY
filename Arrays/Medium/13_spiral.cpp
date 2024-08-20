class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
          
        int top=0,left=0,right=matrix[0].size()-1,down=matrix.size()-1;
        while(top<=down && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                res.push_back(matrix[top][i]);
            }
            top++;
            if(top>down || left>right) break;
            for(int i=top;i<=down;i++)
            {
                res.push_back(matrix[i][right]);
            }
            right--;
            if(top>down || left>right) break;
            for(int i=right;i>=left;i--)
            {
                res.push_back(matrix[down][i]);
            }
            down--;
            if(top>down || left>right) break;
            for(int i=down;i>=top;i--)
            {
                res.push_back(matrix[i][left]);                
            }
            left++;
        }
        return res;
    }
};