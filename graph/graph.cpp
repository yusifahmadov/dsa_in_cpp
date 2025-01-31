#include "graph.h"

bool Graph::addVertex(string vertex)
{
    if (adjList.count(vertex) == 0)
    {
        adjList[vertex];
        return true;
    }
    return false;
}

bool Graph::addEdge(string vertex1, string vertex2)
{
    if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0)
    {
        adjList.at(vertex1).insert(vertex2);
        adjList.at(vertex2).insert(vertex1);
        return true;
    }
    return false;
}

bool Graph::removeEdge(string vertex1, string vertex2)
{
    if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0)
    {
        adjList.at(vertex1).erase(vertex2);
        adjList.at(vertex2).erase(vertex1);
        return true;
    }
    return false;
}

bool Graph::removeVertex(string vertex)
{
    if (adjList.count(vertex) == 0)
        return false;

    for (auto otherVertex : adjList.at(vertex))
    {
        adjList.at(otherVertex).erase(vertex);
    }
    adjList.erase(vertex);
    return true;
}
