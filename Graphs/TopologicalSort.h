#ifndef TOPOLOGICAL_SORT_H
#define TOPOLOGICAL_SORT_H

#include <vector>

class TopologicalSort {
public:
    explicit TopologicalSort(int vertices);

    static void run();

    void addEdge(int from, int to);
    std::vector<int> sort() const;

private:
    int vertices;
    std::vector<std::vector<int>> adjacencyList;
};

#endif
