# Optimization-Tricks

Different and useful ways to optimize code to reduce the O complexity.  
Tricks I learnt along the way. :smile:

## Algorithm/Data structure

1. Calculating Factorial  
  Precomputing Factorial initialing and log/Ln it. Exponential it when retriving the factorial. This is because Factorial gets very large quickly and the computer cannot store the number with limited bytes.
  
2. Binary search  - O(log n)  
  Fast for searching sorted data.
  
3. Segmentation Tree  - O(log n)  
  Efficient for summing an array. Querying and updating an array will be much faster than brute force.
