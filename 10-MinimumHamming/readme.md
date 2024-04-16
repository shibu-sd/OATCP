We iterate through each position from 1 to 32 in a 32-bit integer array, counting the number of integers where that bit is set. When there are 'n' integers in the array and 'k' of them have a particular bit set while the remaining (n-k) do not, that specific bit contributes nx(n-k) to the hamming distance. This contribution comes from pairing each of the 'k' numbers with one of the (n-k) numbers that have a different bit, and the number of such pairings is given by (kC1) x ((n-k)C1). 

Time Complexity : O(n)
Space Complexity : O(1)