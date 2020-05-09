# 1. Introduction 

* in both the options we saw we need to permute all the possibilities, we cant get a single permutation, or the nth permutation in the lexicographical ordering 
* for this we can use the same concept as in our subset problem using binary numbers
* for permutations though we use a base with factorial of the place
* these are called factoradics
* so with the first place we can only represent one number 0
* with the second place we can represent 2 numbers 0 and 1
* with the third place we can represent up to 5 numbers 0,1,2,3,4
* with the 4th place we can represent up to 11 numbers 
* for eg. 10 in factoradics will be 1200 and 11 will be 1210
* to find the factoradic expression of a number repeatedlly divide with numbers starting from 1 and increment at each step the until quotient is 0. The remainder at each step makes up the factoradic expansion
* so find the factoradic expansion 
* lets call the face value  of each index d
* so for each index find the element in the provided set at the d'th index of the original set and remove it form the set 
* the positions of the other elements should be changed to accommodate the change that happened in the previous step 
* the last d will always be 0 since there will only be one element left
