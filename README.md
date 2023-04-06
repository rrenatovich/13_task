# 13_task

## Criteria
The criterion is calculated based on the number of common elements in the two masives.

To do this, first define $same$ - the number of pairs of duplicate elements in arrays. Next , use the formula:
$$Criteria = \frac{size-same}{size},$$
where $size$ - array size.

This criterion shows how the two arrays differ. The criterion takes values from 0 to 1, where 0 arrays are similar. 

## Numirical Example 
<div align="center">
  
$№$  | $Array 1$   | $Array 2$        | $Criteria$      |
:---:|:-----------:|:----------------:|:--------:|
1    | $10,10,10,10,10$ | $1,1,1,1,1$      | $1.0$ |
2    | $10,10,10,10,10$ | $1,10,1,1,1$      | $0.8$ |
3    | $10,10,10,10,10$ | $1,10,10,1,1$      | $0.6$ |
4    | $10,10,10,10,10$ | $1,10,10,10,1$      | $0.4$ |
5    | $10,10,10,10,10$ | $1,10,10,10,10$      | $0.2$ |
6    | $10,10,10,10,10$ | $10,10,10,10,10$      | $0.0$ |
7    | $1,2,3,4,5$ | $1,2,2,3,4$      | $0.2$ |
</div>


**Experiments 1-6** show the dependence of the criterion value on the number of identical pairs of numbers in arrays. 

**Experiment 7** shows that pairs of identical numbers are used in the calculation of the criterion, and not every occurrence of an element from the first array into the second array.
