# Construct K palindrome strings

## Question

Given a string s and an integer K, attempt to construct K non-empty palindrome strings using up all the characters in s.


## Logic

You can make a palindrome out of a string if the characters in it have even frequencies and, it has at most one odd frequency character. The odd frequency character can occupy the space
in the middle of the created substring.

* when making palindromes using all characters in s, to make sure the odd characters are all
used up we can only use them in the center
* so the limiting number is the number of odd numbers 
* simply find the number of characters that have odd frequency and if this is not greater than K return false.

## Leetcode 1400 medium

