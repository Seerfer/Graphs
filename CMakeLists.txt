cmake_minimum_required(VERSION 3.16)
project(Graphs)

set(CMAKE_CXX_STANDARD 14)

add_executable(Graphs main.cpp graph_list.hpp graph_list.cpp graph_matrix.hpp graph_matrix.cpp bellmanford.hpp bellmanford.cpp graph.hpp vector.cpp vector.hpp)