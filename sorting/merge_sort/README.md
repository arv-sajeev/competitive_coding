# Selection sort

Probably the first algorithm I learned 

## 1. Concept 
	* It is a divide and conquer algoorithm 
	* recursively divie the subarray until we reach single element subarrays
	* take two adjacent pairs of subarrays and merger them
	* combine the results 
	* here merge is the conquer and `merge_sort_h` is the divide
	* it is easily parallelizable 
	* There's something about granularity that I don't remember 

## 2. Stats
	* O(nlogn) time compelxity
	* O(n) space complexity we need a temporary array for merge
	* could use linked list maaybe and reduce space complexity
