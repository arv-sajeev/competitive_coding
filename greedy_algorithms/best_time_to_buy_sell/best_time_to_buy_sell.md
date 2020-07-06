# Best time to buy or sell

## Question 
Given an array of prices where a[i] is the price for the stock on the i'th day find a strategy to 
get the maximum profit possible by buying and selling the stock. 

* You can only buy or sell in one day not both
* You need to own stock to sell it 

## Logic 

This uses a peak and valley finding method where we find all the possible peaks and valleys
* the stock is bought at every valley
* the stock is sold at every peak
* if we wait after we encounter a peak this means that we will lose the profit we would have gotten there for e.g 1,2,3,2,5 if we wait without selling at 3 and sell later at 5 we get a profit of 5-1 = 4 whereas if we follow our greedy strategy of selling as soon as we reach a peak we get a net profit of (3-1) + (5 -2) = 2 + 3 = 5
* also we can see that in constantly increasing range the total profit is the incremental sum of each profit margin 
* so all we have to do is add the differences of a increasing range

## Leetcode 122 easy once you get the logic 