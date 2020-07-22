# Reorganize string 

## Question
Given a string of non distinct lower case letters find if it is possible to reorder
it to a string where like characters are not adjacent to each other.

## Logic

Our aim can be to make like terms in alternate positions to ensure this takes place
* we find the frequencies of each character
* sort them based on the frequencies I've used map then multimap to do this
* check is the max frequency is greater than half the strings size then return not possible
* this quite obvious since you can't take alternate positions if there are more than half
* now fill the most frequent in the even positions and the next frequent until even positions are filled
* now fill the odd position in the same manner

## Leetcode 767 Medium

