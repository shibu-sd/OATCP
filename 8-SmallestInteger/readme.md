Here, we can use a greedy stratergy using a stack, we start by pushing a non-zero element into the stack. When we encounter the next element, we check if it is smaller than the element currently in the stack. If it is, we pop the element from the stack and push the new element instead. This is because the new element has the potential to generate a smaller number compared to the one before it. However, we need to limit the number of pops to a maximum of k since only k deletions are allowed.

Time Complexity : O(n)
Space Complexity : O(n)