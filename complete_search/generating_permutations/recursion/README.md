# 1. Introduction 

* We need a vector to build up each permutation and a boolean array to figure out whether it has been used yet in the current permutation
* we first select an element then permute the rest by calling permutation after setting the chosen as true for the entry that has been included in the permuation
* each level of recursion can be seen as each index of vector for permutation 
* as we go deeper we go to the last index 
* the for loop represents the choices you can make at each level
