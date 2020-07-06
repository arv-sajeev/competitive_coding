# Group people, given their group size

## Question 

Given an array of people and the sizes of the groups they belong to, find a possible combination in which they can be grouped

## Logic

Sort according to the group size so we get members that belong to same size groups near to each other
Now when we enocounter a member group the next "group size" members to the same group and then scan the next members group size and go on

## Leetcode 1282 Medium