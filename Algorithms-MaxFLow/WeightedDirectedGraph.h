#pragma once

#include "LinkedList.h"

class WeightedDirectedGraph
{
protected:

	float** m_AdjacentMatrix;
	const int m_NumOfVertexes;
	int m_NumOfEdges;
     enum vertexColor {WHITE, GREY, BLACK};

public:
     
     WeightedDirectedGraph(int n); //Default c'tor

     WeightedDirectedGraph(const WeightedDirectedGraph & other); // copy c'tor
     
     virtual ~WeightedDirectedGraph();
	void MakeEmptyGraph(int n);
	bool IsAdjacent(int u,int v);
	LinkedList GetAdjList(int u);
	void AddEdge(int u, int v, float c);
	void RemoveEdge(int u, int v);
	bool IsVertexInRange(int v);
	bool IsThereAPathUsingBFS(int s, int t, int* parentArr);
	bool* InitializeVisitedArr();
     void AddCapacity(int u, int v, float capacityToAdd);
     void Dfs(int s, bool visited[]);

     int GetNumOfVertexes() const
     {
          return m_NumOfVertexes;
     }
};