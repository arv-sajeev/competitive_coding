# Reconstructing queue based on heights

## Question 

Given an array of people, with their heights and the number of people infront of them with height greater than or equal to their own.a
reconstruct the original queue with the given information 

## Logic 

* first sort per the heights in ascending order
* then people with same height based on how many people they have infront of them 
* traverse this sorted array for each element and set number of skips to be taken =  to the number of people infront of them (>=)
* now traverse the answer array and decrement the number of skips required each time we see an element >= to the element in consideration
* there is never a case > than since greater elements are only considered later
* basically we are planning ahead and leaving space for greater elements to come when we are skipping empty spaces

## Leetcode  406 Medium