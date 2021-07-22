<h1>Partition Array into Disjoint Intervals</h1>
<p><br>
Given an array nums, partition it into two (contiguous) subarrays left and right so that:<br>
&emsp;&emsp;•	Every element in left is less than or equal to every element in right.<br>
&emsp;&emsp;•	left and right are non-empty.<br>
&emsp;&emsp;•	left has the smallest possible size.<br>
Return the length of left after such a partitioning.  It is guaranteed that such a partitioning exists.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: nums = [5,0,3,8,6]<br>
&emsp;&emsp;Output: 3<br>
&emsp;&emsp;Explanation: left = [5,0,3], right = [8,6]<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: nums = [1,1,1,0,6,12]<br>
&emsp;&emsp;Output: 4<br>
&emsp;&emsp;Explanation: left = [1,1,1,0], right = [6,12]<br>
 <br>
Note:<br>
&emsp;&emsp;1.	2 <= nums.length <= 30000<br>
&emsp;&emsp;2.	0 <= nums[i] <= 10^6<br>
&emsp;&emsp;3.	It is guaranteed there is at least one way to partition nums as described.<br>
</p>
