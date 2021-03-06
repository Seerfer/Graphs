#ifndef GRAPHS_BELLMANFORD_HPP
#define GRAPHS_BELLMANFORD_HPP

#include <fstream>
#include "graph_list.hpp"
#include "graph_matrix.hpp"
#define INFINITY 999999

void displayArrayFile(int distanceArray[],const int preArray[], int size, int vertexSource);
void bellmanfordList(GraphList &graph, int vertexSource);
void bellmanfordListFile(GraphList &graph, int vertexSource);
void bellmanfordMatrix(GraphMatrix &graph,int vertexSource);
void bellmanfordMatrixFile(GraphMatrix &graph, int vertexSource);

#endif
