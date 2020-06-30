# Min cost to align chips

## Question 

Given an array of the positions of chips, find the cost of moves to align all of them to the
same position (any). Given the cost is
* 0 for a move that is 2 units +/-
* 1 for a move that is 1 units +/-

## Logic 

* We can see since 2 units has no cost movements from positions that have same parity 
* odd-odd or even-even moves have zero cost
* costs are only incurred when we make odd-even or even-odd i.e unlike parities
* we count the number of odd and even numbers
* we choose the lower number

## Leetcode 1217.




