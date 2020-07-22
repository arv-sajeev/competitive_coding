# Monotone increasing digits

##  Question

Given an integer find the largest number that is less than or equal to N such that it's 
digits are in increasing order

## Logic

* find the point where the decreasing segment starts
* decrement the value of the start element and replace the rest with 9
* but there's a twist if the contents till the start element have the same value decrementing the start value will leave yet another decreasing segment
* so to solve this keep track of the start of and equal segment and decrement the first element in the equal segment and set the rest of the equal segment and decreasing segment to be 9

## Leetcode 738 Medium
