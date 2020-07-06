# Car pooling

## Question 

Given an array of trips with size,start and end 
* find if the sequence of trips is possible for a given capacity c
* trips only occur in one direction 

## Logic 

Make an array that measures the net change made to the car during starts and ends of trips
* this can be done using a hash map
* then traverse sequentially from start of the trip and record the changes in the car occupancy
* if it passes the limit return false
