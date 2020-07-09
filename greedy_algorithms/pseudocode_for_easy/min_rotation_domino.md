# Min rotations to make domino's same

## Question 

Given two arrays A and B where A is the top and B is the bottom of the domino, find if there is a way 
to make either top or bottom of the array consist of same values. You can do this by flipping the domino.

## Logic 

* the tough part is finding which one is common throughout
	* run through the array if two elements are equal save both
	* if only one is equal then that is the one that is same we can exit now
* now just keep track of how many has a in A and find min(a in A,len - a in A)
