<h1>Find K Closest Elements</h1>
<p><br>
Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.<br>
An integer a is closer to x than an integer b if:<br>
&emsp;&emsp;•	|a - x| < |b - x|, or<br>
&emsp;&emsp;•	|a - x| == |b - x| and a < b<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: arr = [1,2,3,4,5], k = 4, x = 3<br>
&emsp;&emsp;Output: [1,2,3,4]<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: arr = [1,2,3,4,5], k = 4, x = -1<br>
&emsp;&emsp;Output: [1,2,3,4]<br>
 <br>
Constraints:<br>
&emsp;&emsp;•	1 <= k <= arr.length<br>
&emsp;&emsp;•	1 <= arr.length <= 10^4<br>
&emsp;&emsp;•	arr is sorted in ascending order.<br>
&emsp;&emsp;•	-10^4 <= arr[i], x <= 10^4<br>
</p>
