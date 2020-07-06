# Check if a string can break another string 

## Question 

Given a two strings check if one permutation of the string can break the other.
a breaks b means a[i] >= b[i] for all i

## Logic 

Just sort both the strings, and then traverse and then compare. If the inequality is broken even once return false

## Leetcode 1433 Medium