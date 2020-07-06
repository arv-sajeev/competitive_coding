# Make paranthesis valid adding extra (,)

## Question
Given a string of paranthesis find the minimum number of parantheses to be added to make it valid

## Logic 

Just traverse and add  what is unbalances and if you can balance something keep track of that as well.
* if you had seen an '(' before and then a ')' then balance it 
* if you see an '(' add it to unbalanced left count
* if you see a ')' with no '(' waiting to be balanced then add it to the unbalanced deficit for right
* add the left and right unbalanced when traversal is done

## Leetcode 921 Easy
