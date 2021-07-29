<h1>Beautiful Array</h1>
<p><br>
An array nums of length n is beautiful if:<br>
&emsp;&emsp;•	nums is a permutation of the integers in the range [1, n].<br>
&emsp;&emsp;•	For every 0 <= i < j < n, there is no index k with i < k < j where 2 * nums[k] == nums[i] + nums[j].<br>
Given the integer n, return any beautiful array nums of length n. There will be at least one valid answer for the given n.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: n = 4<br>
&emsp;&emsp;Output: [2,1,4,3]<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: n = 5<br>
&emsp;&emsp;Output: [3,1,2,5,4]<br>
<br>
Constraints:<br>
&emsp;&emsp;•	1 <= n <= 1000<br>
</p>
