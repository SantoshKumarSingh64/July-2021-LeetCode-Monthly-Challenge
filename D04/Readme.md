<h1>Count Vowels Permutation</h1>
<p><br>
Given an integer n, your task is to count how many strings of length n can be formed under the following rules:<br>
&emsp;&emsp;•	Each character is a lower case vowel ('a', 'e', 'i', 'o', 'u')<br>
&emsp;&emsp;•	Each vowel 'a' may only be followed by an 'e'.<br>
&emsp;&emsp;•	Each vowel 'e' may only be followed by an 'a' or an 'i'.<br>
&emsp;&emsp;•	Each vowel 'i' may not be followed by another 'i'.<br>
&emsp;&emsp;•	Each vowel 'o' may only be followed by an 'i' or a 'u'.<br>
&emsp;&emsp;•	Each vowel 'u' may only be followed by an 'a'.<br>
Since the answer may be too large, return it modulo 10^9 + 7.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: n = 1<br>
&emsp;&emsp;Output: 5<br>
&emsp;&emsp;Explanation: All possible strings are: "a", "e", "i" , "o" and "u".<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: n = 2<br>
&emsp;&emsp;Output: 10<br>
&emsp;&emsp;Explanation: All possible strings are: "ae", "ea", "ei", "ia", "ie", "io", "iu", "oi", "ou" and "ua".<br>
<br>
Example 3: <br>
&emsp;&emsp;Input: n = 5<br>
&emsp;&emsp;Output: 68<br>
<br> 
<br>
Constraints:<br>
&emsp;&emsp;•	1 <= n <= 2 * 10^4<br>
</p>
