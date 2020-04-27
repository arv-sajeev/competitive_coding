# 1. Introduction 

* We can think of making the subset of a set as the process of traversing the entire 	   set and making selections whether each element should be part of our subset.

* So when making a power set i.e the entire set of subsets that can be made from a set, there we will have to make n choices whether or not to include each of the n elements and each choice can be made in two ways yes or no so 2^n

* this can be done by simple recursion,at each point recurse down either including or not including the element at position i until all choices are made
