<h1>Map Sum Pairs</h1>
<p><br>
Implement the MapSum class:<br>
&emsp;&emsp;•	MapSum() Initializes the MapSum object.<br>
&emsp;&emsp;•	void insert(String key, int val) Inserts the key-val pair into the map. If the key already existed, the original key-value pair will be overridden &emsp;&emsp;&emsp;to the new one.<br>
&emsp;&emsp;•	int sum(string prefix) Returns the sum of all the pairs' value whose key starts with the prefix.<br>
<br> <br>
Example 1:<br>
&emsp;&emsp;Input :<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;["MapSum", "insert", "sum", "insert", "sum"]<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;[[], ["apple", 3], ["ap"], ["app", 2], ["ap"]]<br>
&emsp;&emsp;Output : [null, null, 3, null, 5]<br>
&emsp;&emsp;Explanation :<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;MapSum mapSum = new MapSum();<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;mapSum.insert("apple", 3);<br>  
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;mapSum.sum("ap");&emsp;&emsp;// return 3 (apple = 3)<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;mapSum.insert("app", 2);<br>    
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;mapSum.sum("ap");&emsp;&emsp;// return 5 (apple + app = 3 + 2 = 5)<br>
<br><br> 
Constraints:<br>
&emsp;&emsp;•	1 <= key.length, prefix.length <= 50<br>
&emsp;&emsp;•	key and prefix consist of only lowercase English letters.<br>
&emsp;&emsp;•	1 <= val <= 1000<br>
&emsp;&emsp;•	At most 50 calls will be made to insert and sum.<br>
</p>
