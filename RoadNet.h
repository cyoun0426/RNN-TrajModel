#ifndef ROADNET_H
#define ROADNET_H

#include <vector>
using namespace std;


struct Edge {
    double lengthM;
    int startNodeId;
    int endNodeId;
    int id;
};

class RoadNet {
    public:
        /* Class member */
        vector<Edge *> edges;

        /* Constructor and destructor */
        RoadNet();
        RoadNet(vector<Edge *>);
        ~RoadNet();

        void addEdge(Edge *);

        void getNearEdges_s(double, double, double, vector<Edge *> &);
        double dist(double, double, Edge *);
        double start2projection(double, double, Edge *);
        //calSP();
};

#endif
