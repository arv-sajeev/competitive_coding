# Max sum after K negations

## Question

Given an array and a number K,find a strategy to make K negations to the elements of the array and get the maximium possible sum
* you can negate the same element any number of times
* elements can be both positive or negative

## Logic 
We can sort of make a strategy considering the different case depending on whether K is odd or even and the number of negative numbers
* If K is even 
  * If all are positive 
    * just do all the negations on any one since no change will occur ( K is even)
  * If there are negatives and 0
    * Just try all the negative things possible with preference for the one's with biggest magniture (i.e the smallest)
    * if K > no of negative numbers use it all up on the smallest integer available
* If K is odd
  * if all are positive 
    * just do all the negations on the one with least magintude
  * if there are negatives and zero
    * same as the even case

Funny thing is this screwed up logic can be simply be done by choosing the smallest element available in the array after each negation, just give it a thought ;). Using a priority queue.

## Leetcode 1005 Easy