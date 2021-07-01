<h1>Gray Code</h1>
<p><br>
An n-bit gray code sequence is a sequence of 2n integers where:<br>
&emsp; &emsp;•	Every integer is in the inclusive range [0, 2n - 1],<br>
&emsp; &emsp;•	The first integer is 0,<br>
&emsp; &emsp;•	An integer appears no more than once in the sequence,<br>
&emsp; &emsp;•	The binary representation of every pair of adjacent integers differs by exactly one bit, and<br>
&emsp; &emsp;•	The binary representation of the first and last integers differs by exactly one bit.<br>
Given an integer n, return any valid n-bit gray code sequence.<br>
<br>
Example 1:<br>
&emsp; &emsp;Input: n = 2<br>
&emsp; &emsp;Output: [0,1,3,2]<br>
&emsp; &emsp;Explanation: The binary representation of [0,1,3,2] is [00,01,11,10].<br>
&emsp; &emsp;&emsp; &emsp;- 00 and 01 differ by one bit<br>
&emsp; &emsp;&emsp; &emsp;- 01 and 11 differ by one bit<br>
&emsp; &emsp;&emsp; &emsp;- 11 and 10 differ by one bit<br>
&emsp; &emsp;&emsp; &emsp;- 10 and 00 differ by one bit<br>
&emsp; &emsp;&emsp; &emsp;[0,2,3,1] is also a valid gray code sequence, whose binary representation is [00,10,11,01].<br>
&emsp; &emsp;&emsp; &emsp;- 00 and 10 differ by one bit<br>
&emsp; &emsp;&emsp; &emsp;- 10 and 11 differ by one bit<br>
&emsp; &emsp;&emsp; &emsp;- 11 and 01 differ by one bit<br>
&emsp; &emsp;&emsp; &emsp;- 01 and 00 differ by one bit<br>
<br>
Example 2:<br>
&emsp; &emsp;Input: n = 1<br>
&emsp; &emsp;Output: [0,1]<br>
<br> 
Constraints:<br>
&emsp; &emsp;•	1 <= n <= 16<br>
</p>
