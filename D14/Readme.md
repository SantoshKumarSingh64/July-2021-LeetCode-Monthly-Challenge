<h1>Custom Sort String</h1>
<p><br>
order and str are strings composed of lowercase letters. In order, no letter occurs more than once.<br>
order was sorted in some custom order previously. We want to permute the characters of str so that they match the order that order was sorted. More specifically, if x occurs before y in order, then x should occur before y in the returned string.<br><br>
Return any permutation of str (as a string) that satisfies this property.<br>

Example:<br>
&emsp;&emsp;Input:<br> 
&emsp;&emsp;&emsp;&emsp;order = "cba"<br>
&emsp;&emsp;&emsp;&emsp;str = "abcd"<br>
&emsp;&emsp;Output: "cbad"<br>
&emsp;&emsp;Explanation: "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.<br>
<br> 
Note:<br>
&emsp;&emsp;•	order has length at most 26, and no character is repeated in order.<br>
&emsp;&emsp;•	str has length at most 200.<br>
&emsp;&emsp;•	order and str consist of lowercase letters only.<br>
</p>
