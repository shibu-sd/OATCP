Here, we are given an array of costs where costs[i] describes the cost of the i'th icecream. Also we have an amount coins which is equal to the total we can spend. In order to buy the maximum icecreams, we sort the array in non-decreasing order. Then we iterate through the array comparing the current coins we have and increment the answer as we loop forward. When the cost of some icecream becomes larger than the current coins we have, then we can break out of the loop as all the costs forward to it would be greater than or equal to it.

Time Complexity : O(n * logn)
Space Complexity : O(1)