#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Graph
{
private:
    unordered_map<string, unordered_set<string>> adjList;

public:
    bool addVertex(string vertex);
    bool addEdge(string vertex1, string vertex2);
    bool removeEdge(string vertex1, string vertex2);
    bool removeVertex(string vertex);
};

#endif // GRAPH_H
