# Advantage shuffle

## Question 

Given two arrays a and b of the same length, and that if a[i] > b[i] a is at an advantage at
that position.
* Find the permutation of the array that gives it the maximum advantage over b

## Logic

You could just sort the array a and binary search for each b for a number that is just above
the element in b, could use a multiset and lower_bound, my solution though here sorts both.
A is sorted and B is stored in a vector
* service the largest elements in B first
* check if the largest element we have left in a can gain an advantage if not just put the lowest value in a
* so fill er up with stuff from the top and bottom and we will get a solution 

## Leetcode 870	Medium

