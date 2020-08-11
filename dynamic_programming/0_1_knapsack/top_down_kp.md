# 0/1 knapsack problem top down

## Question

Given a list of items with their weights and values and a maximum weight that can be
carried by the bag. Find an optimal selection of items to fill the bag with to get
the maximum value given the constraints.

## Logic

The basic logic is to generate all subsets i.e selections possible from the items
* we can use the weight constraint to prune out selections
* we can see the optimum subproblem structure when we draw out the recursion tree
* the subproblems repeat and thus we can memoize the solutions
* the complexity turns out to be O(n * W) where n is the number of items and W is the max weight permissible
* notice that the subproblem here is given a weight and only the first i items what is the max weight
* this makes a memo table of weight * number of items
