<h1>Convert Sorted Array to Binary Search Tree</h1>
<p><br>
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.<br>
A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.<br>
<br> 
Example 1:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2021/02/18/btree1.jpg"><br><br> 
&emsp;&emsp;Input: nums = [-10,-3,0,5,9]<br>
&emsp;&emsp;Output: [0,-3,9,-10,null,5]<br>
&emsp;&emsp;Explanation: [0,-10,5,null,-3,null,9] is also accepted:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2021/02/18/btree2.jpg"><br><br><br>
Example 2:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2021/02/18/btree.jpg"><br><br> 
&emsp;&emsp;Input: nums = [1,3]<br>
&emsp;&emsp;Output: [3,1]<br>
&emsp;&emsp;Explanation: [1,3] and [3,1] are both a height-balanced BSTs.<br>
<br><br>
Constraints:<br>
&emsp;&emsp;•	1 <= nums.length <= 10^4<br>
&emsp;&emsp;•	-10^4 <= nums[i] <= 10^4<br>
&emsp;&emsp;•	nums is sorted in a strictly increasing order.<br>
</p>
