/*SET MATRIX ZERO

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.

You must do it in place.

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]


Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1
 

Follow up:

A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?


Problem link : https://leetcode.com/problems/set-matrix-zeroes/

*/



class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int column0 =1;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0] ==0){
                column0 = 0;
            }
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = matrix[0][j]= 0;
                    
                }
            }
        }
        
        for(int i=matrix.size()-1;i>=0;i--){
            for(int j=matrix[0].size()-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
                if(column0 == 0){
                    matrix[i][0] = 0;
                }
        }
    }
};
