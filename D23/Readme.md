<h1>Binary Tree Pruning</h1>
<p><br>
Given the root of a binary tree, return the same tree where every subtree (of the given tree) not containing a 1 has been removed.<br>
A subtree of a node node is node plus every node that is a descendant of node.<br>
<br> 
Example 1:<br><br>
&emsp;&emsp;<img src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/06/1028_2.png" style="width:150px;height:100px;"><br><br> 
&emsp;&emsp;Input: root = [1,null,0,0,1]<br>
&emsp;&emsp;Output: [1,null,0,null,1]<br>
&emsp;&emsp;Explanation: Only the red nodes satisfy the property "every subtree not containing a 1".The diagram on the right represents the answer.<br>
<br>
Example 2:<br><br>
 &emsp;&emsp;<img src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/06/1028_1.png" style="width:150px;height:100px;"><br><br> 
&emsp;&emsp;Input: root = [1,0,1,0,0,0,1]<br>
&emsp;&emsp;Output: [1,null,1,null,1]<br>
<br>
Example 3:<br><br>
 &emsp;&emsp;<img src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/04/05/1028.png" style="width:150px;height:100px;"><br><br>
&emsp;&emsp;Input: root = [1,1,0,1,1,0,1,0]<br>
&emsp;&emsp;Output: [1,1,0,1,1,null,1]<br>
<br><br>
Constraints:<br>
&emsp;&emsp;•	The number of nodes in the tree is in the range [1, 200].<br>
&emsp;&emsp;•	Node.val is either 0 or 1.<br>
</p>
