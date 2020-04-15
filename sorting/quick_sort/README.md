# Selection sort

Probably the first algorithm I learned 

## 1. Concept 
	* It is a divide and conquer algorithm 
	* each iteration we select a pivot element and then partition into 2 subarrays
	  greater and lesse than the pivot
	* this is done recursively until all the pivots are found and we get ordering
	* the partitioning scheme we have used is called lomutos, hoare is another popular one
	* lomuto basically uses the last element in the subarray
	* it can be done inplace
	* once a pivot is found it's position will be fixed

## 2. Stats
	* O(nlogn) time compelxity on average
	* could degrade to O(n^2) based on partitioning scheme
	* in lomutos degrades when already sorted
