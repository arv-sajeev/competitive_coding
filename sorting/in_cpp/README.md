# How to use the STL to sort

## 1. Concept 
	* the std::sort can be used to sort sequentially iterable containers
	* `sort(<begin-pointer>,<end-pointer>)` you can use this for numbers and ascending sort
	* the sort without the third argument calls teh std::less for comparision
	* std::less calls the `<` operator of the element
	* so we can override the `<` operator when we have to sort objects
	* the operator should return a boolean value and take an object as parameter
	* we can also use the `sort(<begin>,<end>,<compare function>)` providing a custom function pointer


## 2. Stats
	* Uses introsort a combination of quicksort, heapsort and insertion sort
	* O(nlogn) time compelxity on average
	* It is not stable you can use `stable_sort` for that which uses a form of merger sort
