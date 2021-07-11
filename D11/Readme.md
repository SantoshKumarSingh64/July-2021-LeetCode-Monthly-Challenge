<h1>Find Median from Data Stream</h1>
<p><br>
The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value and the median is the mean of the two middle values.<br>
&emsp;&emsp;•	For example, for arr = [2,3,4], the median is 3.<br>
&emsp;&emsp;•	For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.<br><br>
Implement the MedianFinder class:<br>
&emsp;&emsp;•	MedianFinder() initializes the MedianFinder object.<br>
&emsp;&emsp;•	void addNum(int num) adds the integer num from the data stream to the data structure.<br>
&emsp;&emsp;•	double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input :<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;[[], [1], [2], [], [3], []]<br>
&emsp;&emsp;Output :<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;[null, null, null, 1.5, null, 2.0]<br>
&emsp;&emsp;Explanation:<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;MedianFinder medianFinder = new MedianFinder();<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;medianFinder.addNum(1);    // arr = [1]<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;medianFinder.addNum(2);    // arr = [1, 2]<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;medianFinder.findMedian(); // return 1.5 (i.e., (1 + 2) / 2)<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;medianFinder.addNum(3);    // arr[1, 2, 3]<br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;medianFinder.findMedian(); // return 2.0<br>
<br><br>
Constraints:<br>
&emsp;&emsp;•	-10^5 <= num <= 10^5<br>
&emsp;&emsp;•	There will be at least one element in the data structure before calling findMedian.<br>
&emsp;&emsp;•	At most 5 * 10^4 calls will be made to addNum and findMedian.<br>
<br> 
Follow up:<br>
&emsp;&emsp;•	If all integer numbers from the stream are in the range [0, 100], how would you optimize your solution?<br>
&emsp;&emsp;•	If 99% of all integer numbers from the stream are in the range [0, 100], how would you optimize your solution?<br>
</p>
