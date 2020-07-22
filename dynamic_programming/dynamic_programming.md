# Dynamic Programming

It is a technique that combines the correctness of complete search and the efficiency of 
greedy algorithms. To use dynamic programming the problem to be solved needs to have the
following characteristics.
* Optimal substructure - i.e the problem can be split into sub-problems whose solutions can be combined to form the solution to the original problem
* Overlapping sub-problems the sub-problems overlap i.e we may solve the same problem over and over again.

If it has non-overlapping sub-problems the method is called divide and conquer.

The term was coined by Richard Bellman, the weird names origin is quite fun apparently in
RAND where he was working in the 50's anything related to mathematical research was not
supported by the then Secretary of Defense Wilson. And so to trick this boss of his he named
his research dynamic programming to make it seem like he was doing some sort of applied 
engineering method.

The solutions are usually modelled as recursive functions that find all the possibilities
to form a solution, but the search is optimized using memoization where the solution to 
sub-problems are stored since these can be used later to solve other sub-problems.
