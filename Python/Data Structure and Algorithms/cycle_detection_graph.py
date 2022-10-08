class Graph:
 
    def __init__(self, edges, a):
 
        # Adjacency list representation
        self.adjacencyList = [[] for _ in range(a)]
 
        for (source, destination) in edges:
            self.adjacencyList[source].append(destination)
            self.adjacencyList[destination].append(source)
 
 
# Function for DFS_Traversal traversal
def DFS_Traversal(graph, v, visited, parent_node=-1):
 
    # assign current node as
    visited[v] = True
 
    # loop for every edge (v, u)
    for u in graph.adjacencyList[v]:
 
        # if `u` is not visited
        if not visited[u]:
            if DFS_Traversal(graph, u, visited, v):
                return True
 
        # if `u` is visited, and `u` is not a parent_node
        elif u != parent_node:
            # found a back-edge 
            return True
 
    # No back-edges were found 
    return False
 
 
if __name__ == '__main__':
 
    # List of graph edges
    edges = [
        (0, 1), (0, 2), (2, 3), (2, 4), (3, 4)
    ]
 
    # number of nodes in the graph
    a = 5
 
    # construct graph
    constructed_graph = Graph(edges, a)
 
    # note the visited and unvisited nodes
    visited = [False] * a
 
    # perform DFS traversal from source_node
    if DFS_Traversal(constructed_graph, 0, visited):
        print('Cycle detected')
    else:
        print('Cycle not detected')