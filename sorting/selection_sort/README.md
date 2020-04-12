# Selection sort

Probably the first algorithm I learned 

## 1. Concept 
	Move incrementally from start to finish, building up a sorted partition.
	Choose the minimum of the unsorted array and swap with the first element of the unsorted partition 

## 2. Stats
	* Possibly the worst sorting algorithm around
	* it is not a stable sort i.e doesn't maintain the inital ordering of equal elements
	* it is not adaptive meaning it still does the same work irrespective of how much the original array is already sorted
	* it is in place
	* it is not an online sort i.e it cannot conitnously sort a stream of values 
	* best and worst case O(n^2)
