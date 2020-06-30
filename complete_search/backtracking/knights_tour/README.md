# 1. Introduction 

Check if a sequence of moves exists such that the knight visits every square exactly once,
It is called an open or closed path depending on whether a close loop can be made.
* Indians seem to really like the knights tour one dude even went as far as to make a poem out of the tile the knight visits in its tour, and he is revered as a genius I just call that lazy
* There are proofs stating that
	- that at least an open tour exists for boards whose dimensions are at least 5
	-  a close tour exists for a board unless m >= n and m and n are both odd or m = 1,2,,or 4, m = 3 and n = 4,6,8

* The naive backtracking method would be to find all valid moves then search the possible moves from there if a mistake is found backtrack
* I'm wondering whether the starting position of the tour will have something to do but for now lets assume we're sticking to 0,0 as the starting point 
