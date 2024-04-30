In this problem, we identify a path that covers all edges exactly once, starting from a node with a degree of 1 if available, or from any other node otherwise. Using a depth-first search (DFS) approach, we traverse the graph and construct the path, ensuring each edge is visited only once. Finally, we print the path in reverse order to show the sequence of nodes traversed from start to finish.

Time Complexity : O(V + E)
Space Complexity : O(V + E)