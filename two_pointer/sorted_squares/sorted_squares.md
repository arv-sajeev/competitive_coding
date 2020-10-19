# Sorted squares 

## Question
Given an array of sorted integers, print the squares in sorted order

## Logic
The twist is that negative numbers squares are positive, so to get our answer
we would have to sort by the magnitude of the integers. But since they are already 
sorted we can use the two pointer method to find where the shift happens form -ve to +ve.

We can than traverse outwards from this point within the array and compare the magnitudes of the 
elements using the already sorted order with much less complexity. Only use this method if the array 
is already sorted, or else you could just sort by magnitude and then print.


