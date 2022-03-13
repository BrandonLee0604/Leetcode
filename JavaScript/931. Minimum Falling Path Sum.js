// Given an n x n array of integers matrix, return the minimum sum of any falling path through matrix.

// A falling path starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right. Specifically, the next element from position (row, col) will be (row + 1, col - 1), (row + 1, col), or (row + 1, col + 1).

// Example 1:
// Input: matrix = [[2,1,3],[6,5,4],[7,8,9]]
// Output: 13
// Explanation: There are two falling paths with a minimum sum as shown.

// Example 2:
// Input: matrix = [[-19,57],[-40,-5]]
// Output: -59
// Explanation: The falling path with a minimum sum is shown.
/**
 * @param {number[][]} matrix
 * @return {number}
 */
 var minFallingPathSum = function(matrix) {
    let dp = []   
      for(let i =0;i<matrix.length;i++) {
          dp.push([])
         for(let j =0;j<matrix[i].length ;j++) {
            if(i==0){
                dp[i][j] = matrix[i][j]
            } else {
                dp[i][j] = -200
            }
         }          
      }
      dp[0][0] = matrix[0][0]
      for(let i =1;i<matrix.length;i++) {
          for(let j =0;j<matrix[i].length;j++) {
             let col1 = j-1 >= 0 ? dp[i-1][j-1]:Infinity
             let col2 = j+1 < matrix.length ? dp[i-1][j+1]: Infinity
             dp[i][j] = Math.min(dp[i-1][j], col1,col2) + matrix[i][j]
          }
      }      
      return Math.min.apply(null,dp[matrix.length-1]) 
};