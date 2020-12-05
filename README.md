# Optimization-Tricks

Different and useful ways to optimize code to reduce the O complexity.  
Tricks I learnt along the way. :smile:

## Algorithm/Data structure

1. Factorial  
  Precompute log/Ln Factorial initially. Exponential it when retriving the factorial to get the exact answer.  
  This is because Factorial gets very large quickly and the computer cannot store the number with limited bytes.   
  Also, remember to use double to prevent overflow as the number can get extremely large. 
  
2. Matching Parenthesis  
  Uses a stack to store information inside the parenthesis that can be used later.
  
3. Binary search  - O(log(n))  
  Fast for searching though data that is already sorted.  
  Uses a check case to reduce the upper boundary or increase the lower boundary.

4. Segmentation Tree  - O(log(n))  
  Efficient for getting information from a subarray.  
  Can be used for summation, getting the min or max for a range in an array.  
  Querying and updating the array will be way faster than brute force method - O(n).   
  
5. Breadth First Search - O(V + E)  
  Solves optimization problem in graphs by searching the breadth first. Uses a queue(FIFO) to temporary store the node.   
  
6. Depth First Search - O(V + E)  
  Solves optimization problem in graphs by searching the depth first. Uses a stack(LIFO) to temporary store the node.  
  
7. Sets  - O(log(n))  
  Useful for finding a value in 2 array. This is way faster than the brute force method of iterating though 2 array which is O(n<sup>2</sup>). This is done by creating a hashing function in memory.  
  
8. BackTracking - O(n<sup>p</sup>)  
  Using recursion to derive the different combination of a given variable. Like all recursion function, there is a termination condition and propagation condition.  
  
9. Trie - O(n)  
  Useful for storing a dictionary of words and retrieving it later. It create a alphabet tree.  
  
10. Deadlock Detection - O(V + E)  
  This is used to check whether there is a cycle in a graph which will result in a deadlock. This is because variable depends on each other and there is no start and end. Useful to check for application with single resource instance in distributed system. Actually, this algorithm is build upon a recursive implementation of depth first search. For iterative approach, can look up on Kahn’s algorithm. 
  
11. Spliting Delimiter  
  Split string into substring based on delimiter. Useful for manipulating string.
