<h1>Reverse Nodes in k-Group</h1>
<p><br>
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.<br>
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.<br>
You may not alter the values in the list's nodes, only nodes themselves may be changed.<br>
<br> 
Example 1:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2020/10/03/reverse_ex1.jpg"><br><br>
&emsp;&emsp;Input: head = [1,2,3,4,5], k = 2<br>
&emsp;&emsp;Output: [2,1,4,3,5]<br>
<br>
Example 2:<br><br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2020/10/03/reverse_ex2.jpg"><br><br> 
&emsp;&emsp;Input: head = [1,2,3,4,5], k = 3<br>
&emsp;&emsp;Output: [3,2,1,4,5]<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: head = [1,2,3,4,5], k = 1<br>
&emsp;&emsp;Output: [1,2,3,4,5]<br>
<br>
Example 4:<br>
&emsp;&emsp;Input: head = [1], k = 1<br>
&emsp;&emsp;Output: [1]<br>
<br>
Constraints:<br>
&emsp;&emsp;•	The number of nodes in the list is in the range sz.<br>
&emsp;&emsp;•	1 <= sz <= 5000<br>
&emsp;&emsp;•	0 <= Node.val <= 1000<br>
&emsp;&emsp;•	1 <= k <= sz<br>
<br> 
  <b>Follow-up: Can you solve the problem in O(1) extra memory space?</b><br>
</p>
