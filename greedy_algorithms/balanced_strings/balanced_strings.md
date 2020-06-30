# Balanced string 

## Question

A balanced string has equal quantity of 0 and 1's, given a string split the string to the 
maximum amount of balanced strings possible.

##  Logic 
* maintain a counter for the number of 0's and 1's scanned till now
* when the count of 0's and 1's is equal record a split and reset the counters
* assume we don't split when the counter first becomes equal when the counter next becomes equal we will have a longer string but this string will consist of 2 balanced strings 

## Leetcode 1403 Easy
