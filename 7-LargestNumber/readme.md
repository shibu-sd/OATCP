In this approach, defining a custom comparator helps in sorting a vector of string of numbers. We consider a bigger than b if a + b > b + a. Then we sort the numbers and concatenate them. We can use any type of sort, while sorting instead of comparing two numbers directly, we can use the current comparator logic to compare and swap elements accordingly. Now, we iterate through the vector of string and add it to the answer. 

Time Complexity : O(n * logn)
Space Complexity : O(n)