#include "RoadNet.h"

RoadNet::RoadNet() { }
RoadNet::RoadNet(list <Edge *> edges) { this->edges = edges; }
RoadNet::~RoadNet() { }

void RoadNet::addEdge(Edge *edge) { edges.push_back(edge); }

void RoadNet::getNearEdges_s(double lat, double lon, double , list<Edge *> &edges) {

}
double RoadNet::dist(double lat, double lon, Edge *edge) {
    return 0;
}
double RoadNet::start2projection(double lat, double lon, Edge *edge) {
    return 0;
}