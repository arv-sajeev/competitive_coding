# Number of burgers without wasting integers

## Question
 
Given the number of tomato and cheese slices, is it possible to make a combination of jumbo and normal burgers given that
* jumbo burgers 1 cheese and 4 tomato slices
* normal burgers 1 cheese and 2 tomato slices

## Logic 

Just make an equation with the given constraints, you'll get the equation x (number of jumbos)
`x = (2c - t)/2`, where t is the number of tomato slice and so on. Check if you get an 
integral number for this and then return x and c -x

## Leetcode 1276 Medium
