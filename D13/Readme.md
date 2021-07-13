<h1>Find Peak Element</h1>
<p><br>
A peak element is an element that is strictly greater than its neighbors.
Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to<b> any of the peaks</b>.<br>
You may imagine that nums[-1] = nums[n] = -∞.<br>
You must write an algorithm that runs in O(log n) time.<br>
<br> 
Example 1:<br>
&emsp;&emsp;Input: nums = [1,2,3,1]<br>
&emsp;&emsp;Output: 2<br>
&emsp;&emsp;Explanation: 3 is a peak element and your function should return the index number 2.<br>
<br>
Example 2:<br>
&emsp;&emsp;Input: nums = [1,2,1,3,5,6,4]<br>
&emsp;&emsp;Output: 5<br>
&emsp;&emsp;Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.<br>
<br> <br>
Constraints:<br>
&emsp;&emsp;•	1 <= nums.length <= 1000<br>
&emsp;&emsp;•	-2^31 <= nums[i] <= 2^31 - 1<br>
&emsp;&emsp;•	nums[i] != nums[i + 1] for all valid i.<br>
</p>
