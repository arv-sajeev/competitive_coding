# Score after flipping matrix

## Question 

Given a 2D matrix you are allowed to flip the bits of rows and coloumns. The matrix is then represented as a binary number as the sum of the numbers represented by each row. Maximize this sum.

## Logic 

* The MSB makes the biggest difference in fact 1 more than all the other bits
* so for each row flip the bits so as to make the MSB 1
* after flipping rows is done consider each coloumn if the number of 1's is less than 0's then flipping that row would increase our sum.