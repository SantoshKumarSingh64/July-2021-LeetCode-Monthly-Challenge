<h1>Reshape the Matrix</h1>
<p><br>
In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.<br>
You are given an m x n matrix mat and two integers r and c representing the row number and column number of the wanted reshaped matrix.<br>
The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.<br>
If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.<br>
<br><br>
Example 1:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2021/04/24/reshape1-grid.jpg"><br> 
&emsp;&emsp;Input: mat = [[1,2],[3,4]], r = 1, c = 4<br>
&emsp;&emsp;Output: [[1,2,3,4]]<br>
<br>
Example 2:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2021/04/24/reshape2-grid.jpg"><br> 
&emsp;&emsp;Input: mat = [[1,2],[3,4]], r = 2, c = 4<br>
&emsp;&emsp;Output: [[1,2],[3,4]]<br>
<br>
<br>
Constraints:<br>
&emsp;&emsp;•	m == mat.length<br>
&emsp;&emsp;•	n == mat[i].length<br>
&emsp;&emsp;•	1 <= m, n <= 100<br>
&emsp;&emsp;•	-1000 <= mat[i][j] <= 1000<br>
&emsp;&emsp;•	1 <= r, c <= 300<br>
</p>
