# Partition labelling 

## Question 

Given a string of lowercase alphabets, make a partition such that occurences of a character only happen in one partition
* find the maximum number of partitions
* return the start and end indices of the partitions

## Logic 

* Just find the last occurence of each character within the string 
* with this we can traverse the string and find a partition such that the last occurence of a character covers the entire range of occurences of previous characters

## Leetcode 763 medium