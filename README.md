# Closeness-Centrality
Outlining the solution

Based on the information given by the challenge, the given graph can be interpreted as an Unweighted and Undirected Graph.

In order to calculate the closeness centrality metric, it is needed to find the shortest path lenght (distance) between a node and all other nodes, in an effort to do that it can be used the Breadth First Search Algorithm (BFS), that traverses the graph and find a shortest path (not all of them, just "a") between two nodes. With all the distances in hand we can calculate the closeness centrality from that node.

Setting up the Project

Download the repository
Go to: http://www.codeblocks.org/downloads/binaries/
Download the version: codeblocks-20.03mingw-setup.exe
Install and run the platform
Go to file -> Open -> Closeness Centrality (folder) -> main -> build and run 

In the console:
Number of nodes for this challenge:99, and then press enter
Number of edges for this challenge:945, and then press enter
Cntrl + C  in the list of edges, and then Cntrl + V in the console

References:
https://en.wikipedia.org/wiki/Centrality#Closeness_centrality
https://en.wikipedia.org/wiki/Shortest_path_problem
https://www.sciencedirect.com/topics/computer-science/closeness-centrality#:~:text=require%20many%20steps.-,Closeness%20centrality%20is%20a%20measure%20of%20the%20average%20shortest%20distance,distance%20to%20all%20other%20vertices
https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/
