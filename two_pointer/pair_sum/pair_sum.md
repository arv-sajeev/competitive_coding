# Pair sum using two pointer

## Question

Given an array of integers find if a pair exists such that the sum of the two elements add 
up to a given target sum.

## Logic

The brute force method would be to check all the pairs possible which would be nC2 and hence
0(n^2). Instead sorting the array we get an nlogn and then we use the two pointer method to 
find whether such a sum exists.
* start from the rightmost and leftmost ends of the array
* they will have the least and greatest elements
* if the sum is less than required increment the left making the sum bigger
* if the sum is to larger decrement the right making the sum smaller
* stop when you find a sum or cross the pointers
* this can only be used to find a single such pair, it can't find the multiple possible pairs


