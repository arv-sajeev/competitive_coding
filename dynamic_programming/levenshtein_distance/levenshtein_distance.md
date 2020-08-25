# Levenshtein distance 

## Question 

Given two strings find the minimum number of operations to convert one string to another. 
The following are the permitted operations -
* insert a character - DEF   --> DEAF  
* remove a character - CRASH --> CASH
* modify a character - PUCK  --> FUCK 

See what I did there :P.  For e.g : LOVE --> LOVIE --> MOVIE hence edit distance is 2


## Logic

We consider our subproblem  to be to change the prefix(a) to prefix(b).a[0:i] to b[0:j].
We can keep track of our subproblem just using the indices of the prefixes. The possible moves.

* we can delete the i'th character in a and then convert the rest of a, i.e a[0:i-1] to b[0:j]
* we can modify the i'th character in a to match the j'th character in b and then convert the rest of a to the rest of n, i.e a[0:i-1] - b[0:j-1]
* we can add a character to the tail of the 'a' prefix and match the new string with the current b prefix, i.e match a[0:i+1] to b[0:i] 
* if the a[j] == b[i] we can consider this to be a modify operation but with zero cost, add this as an extra special case.
* __the above step can also be thought of matching everything of b other than the last element to the a prefix i.e a[0:i] to b[0:j-1]__

The base cases for the cases are when: 
* a[0:0] a prefix is the empty string, to match any b to a we have to add length(b[0:j]) characters to a
* similarly  when b[0:0], b prefix is the empty string. we have to delete all the characters in a[0:i]


