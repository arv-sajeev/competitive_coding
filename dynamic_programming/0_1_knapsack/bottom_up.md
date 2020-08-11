
# 0/1 knapsack problem top down

## Question

Given a list of items with their weights and values and a maximum weight that can be
carried by the bag. Find an optimal selection of items to fill the bag with to get
the maximum value given the constraints.

## Logic 

* First we try to model how the recursion tree looks like
* now using this we find out what the subproblem is
* first we check whether using the element is a valid move given the constraints
* the problem is finding out whether given a weight w and a set of items, is choosing the i'th item optimum
* we can find this by comparing the optimum without that element and the optimum with that element
* in our table this becomes the condition 
```cpp
max(table[item-1][weight],items[item].value + table[item-1][weight - items[item].weight]);
```
