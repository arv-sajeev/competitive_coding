# Largest Values from labels

## Question 

Given two arrays values and labels where the i'th element gives the value and label. Create a subset from the elements
* such that each label occurs <= label-limit
* such that the total number of elements >= num-limit

## Logic

Simply sort by value and then by labels
* you could then use another array to keep track of the count of labels used in the subset
* use the count vs label-limit do decide whether to choose the element

## Leetcode 1090 Medium
