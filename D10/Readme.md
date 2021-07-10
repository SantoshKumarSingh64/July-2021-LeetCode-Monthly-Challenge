<h1>Decode Ways II</h1>
<p><br>
A message containing letters from A-Z can be encoded into numbers using the following mapping:<br>
&emsp;&emsp;'A' -> "1"<br>
&emsp;&emsp;'B' -> "2"<br>
&emsp;&emsp;...<br>
&emsp;&emsp;'Z' -> "26"<br><br>
To decode an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, "11106" can be mapped into:<br>
&emsp;&emsp;•	"AAJF" with the grouping (1 1 10 6)<br>
&emsp;&emsp;•	"KJF" with the grouping (11 10 6)<br>
Note that the grouping (1 11 06) is invalid because "06" cannot be mapped into 'F' since "6" is different from "06".<br><br>
In addition to the mapping above, an encoded message may contain the '*' character, which can represent any digit from '1' to '9' ('0' is excluded). For example, the encoded message "1*" may represent any of the encoded messages "11", "12", "13", "14", "15", "16", "17", "18", or "19". Decoding "1*" is equivalent to decoding any of the encoded messages it can represent.<br><br>
Given a string s containing digits and the '*' character, return the number of ways to decode it.<br>
Since the answer may be very large, return it modulo 10^9 + 7.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: s = "*"<br>
&emsp;&emsp;Output: 9<br>
&emsp;&emsp;Explanation: The encoded message can represent any of the encoded messages "1", "2", "3", "4", "5", "6", "7", "8", or "9".
Each of these can &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;be decoded to the strings "A", "B", "C", "D", "E", "F", "G", "H", and "I" respectively.
Hence, there are a total of 9 ways to decode "*".<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: s = "1*"<br>
&emsp;&emsp;Output: 18<br>
&emsp;&emsp;Explanation: The encoded message can represent any of the encoded messages "11", "12", "13", "14", "15", "16", "17", "18", or "19".
Each of &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;these encoded messages have 2 ways to be decoded (e.g. "11" can be decoded to "AA" or "K").
Hence, there are a total of 9 * 2 = &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;18 ways to decode "1*".<br>
<br>
Example 3:<br>
&emsp;&emsp;Input: s = "2*"<br>
&emsp;&emsp;Output: 15<br>
&emsp;&emsp;Explanation: The encoded message can represent any of the encoded messages "21", "22", "23", "24", "25", "26", "27", "28", or "29".
"21", &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;"22", "23", "24", "25", and "26" have 2 ways of being decoded, but "27", "28", and "29" only have 1 way.
Hence, there are a total of &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;(6 * 2) + (3 * 1) = 12 + 3 = 15 ways to decode "2*".<br>
<br><br>
Constraints:<br>
&emsp;&emsp;•	1 <= s.length <= 10^5<br>
&emsp;&emsp;•	s[i] is a digit or '*'.<br>
</p>
