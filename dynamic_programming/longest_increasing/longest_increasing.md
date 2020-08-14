# Longest Increasing subsequence

## Question

Given an array of integers find the longest increasing subsequence. Notice what a subsequence
means is not a continuous sequence but any set that maintains the ordering and has the 
increasing property.

## Logic

* the minimum length is 1
* find the lis possible considering elements only uptil curr index
* we can find the lis at each curr by check for all the positions before whether we can extend their sequence
* a sequence at i can be extended by curr if a[curr] > a[i] 
* thus we can calculate all the extended sequences possible at curr and choose the max
