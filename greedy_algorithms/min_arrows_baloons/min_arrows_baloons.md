# Minimum number of arrows to burst balloons

## Question 

Given the start and end positions of balloons find the minimum number of arrows for bursting
all of them.

## Logic

First sort the balloons in the descending order of their start positions
* so we can easily say that the start of all other balloons are before the chosen position 
* so any balloon with end position greater than or = to the start position can be burst by this position 
* any balloon that cannot be burst using this strategy is the shot and we check if there is any balloon that cannot be shot by this arrow and repeat this step till we finish all balloon

## Leetcode 452 Medium I like this one
