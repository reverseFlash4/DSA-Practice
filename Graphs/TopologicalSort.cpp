#include "TopologicalSort.h"

#include <iostream>
#include <queue>
#include <stdexcept>

TopologicalSort::TopologicalSort(int vertices)
    : vertices(vertices), adjacencyList(vertices) {
    if (vertices < 0) {
        throw std::invalid_argument("Number of vertices cannot be negative");
    }
}

void TopologicalSort::run() {
    TopologicalSort graph(6);

    graph.addEdge(5, 2);
    graph.addEdge(5, 0);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);

    std::vector<int> order = graph.sort();

    std::cout << "Topological order: ";
    for (int vertex : order) {
        std::cout << vertex << " ";
    }
    std::cout << "\n";
}

void TopologicalSort::addEdge(int from, int to) {
    if (from < 0 || from >= vertices || to < 0 || to >= vertices) {
        throw std::out_of_range("Vertex index is out of range");
    }

    adjacencyList[from].push_back(to);
}

std::vector<int> TopologicalSort::sort() const {
    std::vector<int> indegree(vertices, 0);

    for (const auto& neighbors : adjacencyList) {
        for (int neighbor : neighbors) {
            indegree[neighbor]++;
        }
    }

    std::queue<int> ready;
    for (int vertex = 0; vertex < vertices; vertex++) {
        if (indegree[vertex] == 0) {
            ready.push(vertex);
        }
    }

    std::vector<int> order;
    while (!ready.empty()) {
        int current = ready.front();
        ready.pop();
        order.push_back(current);

        for (int neighbor : adjacencyList[current]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0) {
                ready.push(neighbor);
            }
        }
    }

    if (static_cast<int>(order.size()) != vertices) {
        throw std::logic_error("Graph contains a cycle; topological sort is not possible");
    }

    return order;
}
