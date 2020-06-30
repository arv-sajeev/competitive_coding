# Minimum subsequence in non increasing order 

Given an array find a subsequence of the array whose sum of elements is strictly greater than
the sum on the non-included elements of the array.
* if there are multiple solutions return the sequence with minimum size

## Logic 
* sort the array in descending order
* calculate the total array sum
* keep adding elements from the front and update the subsequence sum and not-included sum
* stop when subsequence sum becomes greater than not-included sum

## New concept 

### accumulate

Is a function that is used to accumulate the results on all the values given in the range
* the default operation is to add stuff up
* you can give your own `binary_operation` and initial value
* sort of like reduce in python 
* I used it here to find the sum of all the elements

## Leetcode 1403 easy
