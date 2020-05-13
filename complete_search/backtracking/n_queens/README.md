# 1. Introduction 

The aim of the problem is to find whether a configuration of N-queens on an NxN chess board is possible without them attacking each other and if so how many such combinations are there

## 2. Approach

* The naive approach would be to find every possible configuration of n-queens on the board and then print out the ones that are valid 
* For backtracking we place the first queen in an arbitrary position and then place the next queen that is safe from the previously placed queen
* if all the queens are placed then a solution is found and it is printed
* if there are no safe spots the choice made for the previous queens is assumed to be wrong and is changed to a new safe position and this is continued 
* it is quite evident that only one queen can be on one row and one column this makes our search easier
* so we proceed row wise 
* this gives another helpful info to only check for attacks form above the current row, and we only have to check column and diagonal checks 
* also instead of having to use an nxn we could just a a single array n with each index representing the row and the contents the colums you decided to place it in.

