# Optimization-Tricks

Different and useful ways to optimize code to reduce the O complexity.  
Tricks I learnt along the way. :smile:

## Algorithm/Data structure

1. Factorial  
  Precompute log/Ln Factorial initially. Exponential it when retriving the factorial to get the exact answer.  
  This is because Factorial gets very large quickly and the computer cannot store the number with limited bytes.   
  Also, remember to use double to prevent overflow as the number can get extremely large. 
  
2. Matching Parenthesis  
  Use a stack to store information inside the parenthesis that can be used later.
  
3. Binary search  - O(log n)  
  Fast for searching though data that is already sorted.  
  Use check case to reduce the upper boundary or increase the lower boundary.

4. Segmentation Tree  - O(log n)  
  Efficient for getting information from a subarray.  
  Can be used for summation, getting the min or max for a range in an array.  
  Querying and updating the array will be way faster than brute force method - O(n).  
