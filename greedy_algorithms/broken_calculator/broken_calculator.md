# Broken calculator

## Question

Given a number a try to change to number b given only the following operations are allowed
* multiply by 2
* subtract 1

## Logic

I find the intuition a bit tricky but it makes sense once you work it out.
* if a is greater than b then we can only subtract (a - b)
* if b is greater then we have to device a strategy for minimum moves
* if we try multiplying by 2 and decrementing from a to b we have next to no way to find out which move to take
* on the other hand consider trying to reach from b to a
* our operations now are b/2 and b++
* for the (a > b) case the solution is trivial as seen above
* so we can assume that b >= a 
* In the case that b is odd it is evident that since we can only reach a state using the valid moves the move made was not multiply by 2 other wise b would be even
* so for the case that b is odd the move just before it will be a decrement or in out new shifted way + 1
* if it is even  it could have been reached by either -1 or x 2 
* if we used -1 then the previous state must have been odd i.e it was reached to by another -1
* so basically with with two moves you get -2 
* the next number will be even again and if +1 was optimal we keep going this gets seriously screwed up
* the condition where maximum moves will be required is when b is a+1 well have to go from a to 2a and then reach back

## Leetcode 991 Medium but I found it kind of tough
