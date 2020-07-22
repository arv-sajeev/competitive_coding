# Previous permutation with one swap 

## Question 

Given an array of integers (non-distinct) find the immediate previous permutation that can be 
made from the array with a single swap.

## Logic

* if permutation is in completely sorted order it means it is in the lowest possible state it can be
* so traverse from the lower place value i.e the right side and find the first occurrence where the elements are not relatively sorted to each other
* store this position and find the value that is closest to the saved element and just less than it
* swap the two saved numbers to get the answer

## Leetcode 1053 Medium refer Steinhaus permutation algorithm before checking this out. 
 
