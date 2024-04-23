Here, we use the Ford-Fulkerson algorithm which efficiently calculates the maximum flow possible through a network. It starts with zero flow and iteratively searches for paths (augmenting paths) from the source to the sink with available capacity. The amount of flow sent along this path is limited by the bottleneck (minimum residual capacity) on the path. This flow is then added to the network, and the process repeats until no more augmenting paths are found, resulting in the maximum achievable flow.

Time Complexity : O(V * E ^ 2)
Space Complexity : O(V)