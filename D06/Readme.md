<h1>Reduce Array Size to The Half</h1>
<p><br>
Given an array arr.  You can choose a set of integers and remove all the occurrences of these integers in the array.<br>
Return the minimum size of the set so that at least half of the integers of the array are removed.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: arr = [3,3,3,3,5,5,5,2,2,7]<br>
&emsp;&emsp;Output: 2<br>
&emsp;&emsp;Explanation: Choosing {3,7} will make the new array [5,5,5,2,2] which has size 5 (i.e equal to half of the size of the old array).
Possible sets of &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;size 2 are {3,5},{3,2},{5,2}.
Choosing set {2,7} is not possible as it will make the new array [3,3,3,3,5,5,5] which has size greater &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;than half of the size of the old array.<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: arr = [7,7,7,7,7,7]<br>
&emsp;&emsp;Output: 1<br>
&emsp;&emsp;Explanation: The only possible set you can choose is {7}. This will make the new array empty.<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: arr = [1,9]<br>
&emsp;&emsp;Output: 1<br>
<br>
Example 4:<br>
&emsp;&emsp;Input: arr = [1000,1000,3,7]<br>
&emsp;&emsp;Output: 1<br>
<br>
Example 5:<br>
&emsp;&emsp;Input: arr = [1,2,3,4,5,6,7,8,9,10]<br>
&emsp;&emsp;Output: 5<br>
<br><br> 
Constraints:<br>
&emsp;&emsp;•	1 <= arr.length <= 10^5<br>
&emsp;&emsp;•	arr.length is even.<br>
&emsp;&emsp;•	1 <= arr[i] <= 10^5<br>
</p>
