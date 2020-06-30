#Greedy algorithms

A greedy algorithm constructs a solution to the problem by always making a choice 
that looks the best at the moment. 

* there usually is no concept of backtracking since the solution is constructed directly
* it is tough to device a greedy strategy since we need to make a method to find the optimal choice at each point, but this should not be a local optimum but a global optimum
* proving correctness for greedy algorithms is tough


## Examples

### The coin problem

We have a set of given coins {1,2,5,10,20,50,100,200}, is it possible to form a given sum with
the coins,and what is the minimum number of coins. A coin can be used any nun

* for this special configuration of coins it happens that any number can be formed and the solution can be found using a greedy approach
* our optimal strategy will be to choose the largest possible coin till the required sum is obtained

We can prove correctness as follows

* each coin that has its double in the set {1,5,10,20,50,100} will occur only once since to reduce number of coins we can replace them with a combination of their doubles and one of them depending on whether they are odd or even
* also the coins 2,20 appear at most twice because if the occur more than twice they can be replaced by a combination of 2  coins for e.g. 2+2+2 = 1+5 and 20+20+20 = 50 + 10

* using this we can prove that it is not possible to construct a sum x or any larger sum using coins that are smaller than x for e.g the largest optimal sum using coins 1,5,10,20,50 is 
 99.

But if the set of coins can contain any coins the algorithm does not necessarily produce an optimal solution, and becomes more tougher to prove correctness.

### Scheduling

Given n events with their starting and ending times, find a schedule that allows us to include
as many events as possible. The book goes through a series of candidate greedy strategies and
discusses its counterexamples, and find finally that the following strategy always produces 
optimal solution.

* select the next possible event that ends as early as possible
* assume we choose an event that ends later then the number of event we can choose will be <= events we could have chosen with out strategy 
