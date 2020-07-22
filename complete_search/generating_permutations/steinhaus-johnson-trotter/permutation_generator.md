# Permutation generator

Attempting to make a generator function that returns the i'th permutation each time
it is called. Using the ***STEINHAUS–JOHNSON–TROTTER ALGORITHM*** it's and algorithm
that is in place and uses swaps to find the next permutation, I guess it's almost a 
minimal change algorithm but is lexicographically ordered.

## Logic 

* Traverse from the right to left the sequence should consist of a increasing sequence
* the first occurrence of a decreasing unit should be marked with the lower numbers index for e.g if 3 4 mark 3
* now find the next largest element greater than our marked element that is to the left of out marked spot
* swap these two numbers, now sort the tail end in increasing order beginning from our marked spot

## Drawback 

You can't just randomly calculate the i'th permutation, you need to calculate all the one's before it 
or at least have the one that is just before it. This can be effectively used for the next permutation algorithm
For calculating the i'th permutation randomly it would be better to use factoradics

