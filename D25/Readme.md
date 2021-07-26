<h1>Non-negative Integers without Consecutive Ones</h1>
<p><br>
Given a positive integer n, return the number of the integers in the range [0, n] whose binary representations do not contain consecutive ones.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: n = 5<br>
&emsp;&emsp;Output: 5<br>
&emsp;&emsp;Explanation:<br>
&emsp;&emsp;&emsp;&emsp;Here are the non-negative integers <= 5 with their corresponding binary representations:<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;0 : 0<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;1 : 1<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;2 : 10<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;3 : 11<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;4 : 100<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;5 : 101<br>
&emsp;&emsp;&emsp;&emsp;Among them, only integer 3 disobeys the rule (two consecutive ones) and the other 5 satisfy the rule.<br> 
<br>
Example 2:<br>
&emsp;&emsp;Input: n = 1<br>
&emsp;&emsp;Output: 2<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: n = 2<br>
&emsp;&emsp;Output: 3<br>
<br> 
Constraints:<br>
&emsp;&emsp;•	1 <= n <= 10^9<br>
</p>
