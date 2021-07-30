<h1>01 Matrix</h1>
<p><br>
Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.<br>
The distance between two adjacent cells is 1.<br>
<br> 
Example 1:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2021/04/24/01-1-grid.jpg"><br><br> 
&emsp;&emsp;Input: mat = [[0,0,0],[0,1,0],[0,0,0]]<br>
&emsp;&emsp;Output: [[0,0,0],[0,1,0],[0,0,0]]<br>
<br>
Example 2:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2021/04/24/01-2-grid.jpg"><br><br> 
&emsp;&emsp;Input: mat = [[0,0,0],[0,1,0],[1,1,1]]<br>
&emsp;&emsp;Output: [[0,0,0],[0,1,0],[1,2,1]]<br>
 <br>
Constraints:<br>
&emsp;&emsp;•	m == mat.length<br>
&emsp;&emsp;•	n == mat[i].length<br>
&emsp;&emsp;•	1 <= m, n <= 10^4<br>
&emsp;&emsp;•	1 <= m * n <= 10^4<br>
&emsp;&emsp;•	mat[i][j] is either 0 or 1.<br>
&emsp;&emsp;•	There is at least one 0 in mat.<br>
</p>
