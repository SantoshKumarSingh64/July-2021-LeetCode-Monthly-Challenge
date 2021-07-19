<h1>Lowest Common Ancestor of a Binary Search Tree</h1>
<p><br>
Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.<br><br>
According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow <b>a node to be a descendant of itself<b>).”
<br><br> 
Example 1:<br><br>
&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2018/12/14/binarysearchtree_improved.png"><br><br>
&emsp;&emsp;Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8<br>
&emsp;&emsp;Output: 6<br>
&emsp;&emsp;Explanation: The LCA of nodes 2 and 8 is 6.<br>
<br>
Example 2:<br><br>
&emsp;&emsp;&emsp;&emsp;<img src="https://assets.leetcode.com/uploads/2018/12/14/binarysearchtree_improved.png"><br><br> 
&emsp;&emsp;Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4<br>
&emsp;&emsp;Output: 2<br>
&emsp;&emsp;Explanation: The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: root = [2,1], p = 2, q = 1<br>
&emsp;&emsp;Output: 2<br>
<br> 
Constraints:<br><br>
&emsp;&emsp;•	 The number of nodes in the tree is in the range [2, 10^5].<br>
&emsp;&emsp;•	 -10^9 <= Node.val <= 10^9<br>
&emsp;&emsp;• 	All Node.val are unique.<br>
&emsp;&emsp;•	 p != q<br>
&emsp;&emsp;•	 p and q will exist in the BST.<br>
</p>
