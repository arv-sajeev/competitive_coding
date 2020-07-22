# Task Scheduler

## Question

Given an array of chars representing the type of tasks do be done. Make an optimal schedule
with minimum time given that 
* tasks of the same type can only be done after a cool off time of k
* you can either do a task after it's cool off or leave the cpu idle

## Logic

Looks tough but the only thing that matters is the number of idles that would come if
all we had to do was schedule the most frequent task. The rest of the tasks can be fit in
the idle cycles we have in between the frequent tasks
* so we find the max frequency the number of idle gaps will be freq-1
* so we'll need freq-1 * cool-off to space the frequent tasks
* if more than one task have the same max frequency we can consider these a unit that have to be equally space with idles
* so what we do is sort the map and get the max frequency and the number of tasks with this frequency `max_freq` and `count`
* the formula will then become `(max - 1)*(k - count + 1) + (max * count)`
* so total will be the idles we calculate above and then number of max frequency units

## Leetcode 621 Medium 
