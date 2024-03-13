#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;
struct Edge {
    char destination;
    int weight;
    
    Edge(char dest, int w) : destination(dest), weight(w) {}
};
class Graph {
private:
    vector<vector<Edge>> adjacencyList;
    int numVertices;
public:
    Graph(int n) : numVertices(n) {
        adjacencyList.resize(n);
    }
    // Add an edge to the graph
    void addEdge(char source, char destination, int weight) {
        adjacencyList[source - 'a'].push_back(Edge(destination, weight));
    }
    // Dijkstra's algorithm
    vector<int> dijkstra(char start) {
        vector<int> distances(numVertices, numeric_limits<int>::max());
        distances[start - 'a'] = 0;
        priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> pq;
        pq.push({0, start});
        while (!pq.empty()) {
            char u = pq.top().second;
            pq.pop();
            for (const Edge& edge : adjacencyList[u - 'a']) {
                char v = edge.destination;
                int weight = edge.weight;
                
                if (distances[u - 'a'] + weight < distances[v - 'a']) {
                    distances[v - 'a'] = distances[u - 'a'] + weight;
                    pq.push({distances[v - 'a'], v});
                }
            }
        }
        return distances;
    }
};
int main() {
    int numVertices = 6; // Number of vertices
    Graph graph(numVertices);
    // node a concider as source node
    graph.addEdge('a', 'b', 5);
    graph.addEdge('a', 'c', 3);
    graph.addEdge('b', 'd', 6);
    graph.addEdge('b', 'c', 2);
    graph.addEdge('c', 'e', 4);
    graph.addEdge('c', 'f', 2);
    graph.addEdge('c', 'd', 7);
    graph.addEdge('d', 'e', -1);
    graph.addEdge('e', 'f', -2);
    char start = 'a'; // Starting node
    vector<int> distances = graph.dijkstra(start);
    cout << "Shortest distances from node " << start << ":" << endl;
    for (int i = 0; i < numVertices; ++i) {
        if (distances[i] == numeric_limits<int>::max())
            cout << "Node " << (char)(i + 'a') << ": unreachable" << endl;
        else
            cout << "Node " << (char)(i + 'a') << ": " << distances[i] << endl;
    }
    return 0;
}
