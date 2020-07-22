# Boats to save people

## Question 

Given an array of people's weight find the minimum number of trips to transport everyone
* the boat can only carry a max of 2 people
* the boat can only carry a max weight of k


## Logic 

Just sort based on weights, try pairing the heaviest people with  lightest so 
form left and right. If their weights added is less than limit increment left and
decrement right, or if you can just do the heavy person.

## Leetcode 881 Medium 
