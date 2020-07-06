# Two city scheduling 

## Question
Trying to conduct interviews for candidates in two cities A and B.
* given an array containing costs for each candidate to go to A or B
* the candidates should be equally divided among the cities

Find the minimum cost for conducting the interviews

## Logic

The main constraint here is the cost and the fact that only the candidates must be split equally.
* so our choice is finding out which cities it most profitable to choose city A
* this can be done be sorting based on difference of the  costs of A and B 
* we also need to keep track of which index corresponds to which cost

## Leetcode 1029. Easy 