Here, for adding elements to a sorted integer array nums such that any number in the range [1, n] inclusive can be formed by the sum of some elements in the array, we can iterate through nums while keeping track of the current range we can form. If the next element in nums is greater than the current range, we need to add a patch to cover the gap. Adding the patch as the current range itself allows us to double the range because we can use the new number to combine with any previous numbers.

Time Complexity : O(n)
Space Complexity : O(1)