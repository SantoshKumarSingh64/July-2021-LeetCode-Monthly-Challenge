<h1>Three Equal Parts</h1>
<p><br>
You are given an array arr which consists of only zeros and ones, divide the array into three non-empty parts such that all of these parts represent the same binary value.<br><br>
If it is possible, return any [i, j] with i + 1 < j, such that:<br>
&emsp;&emsp;•	arr[0], arr[1], ..., arr[i] is the first part,<br>
&emsp;&emsp;•	arr[i + 1], arr[i + 2], ..., arr[j - 1] is the second part, and<br>
&emsp;&emsp;•	arr[j], arr[j + 1], ..., arr[arr.length - 1] is the third part.<br>
&emsp;&emsp;•	All three parts have equal binary values.<br>
If it is not possible, return [-1, -1].<br><br>
Note that the entire part is used when considering what binary value it represents. For example, [1,1,0] represents 6 in decimal, not 3. Also, leading zeros are allowed, so [0,1,1] and [1,1] represent the same value.<br><br>
Example 1:<br>
&emsp;&emsp;Input: arr = [1,0,1,0,1]<br>
&emsp;&emsp;Output: [0,3]<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: arr = [1,1,0,1,1]<br>
&emsp;&emsp;Output: [-1,-1]<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: arr = [1,1,0,0,1]<br>
&emsp;&emsp;Output: [0,2]<br>
<br> 
Constraints:<br>
&emsp;&emsp;•	3 <= arr.length <= 3 * 10^4<br>
&emsp;&emsp;•	arr[i] is 0 or 1<br>
</p>
