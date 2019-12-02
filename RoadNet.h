#include <iostream>
using namespace std
#include <list>

struct Edge {
    // struct attributes here
};

class RoadNet {
    public:
        /* Class member */
        list<Edge *> edges;

        /* Constructor and destructor */
        RoadNet();
        RoadNet(list<Edge *>);
        ~RoadNet();

        void addEdge(Edge *);

        void getNearEdges_s(double, double, double, list<Edge *> &);
        double dist(double, double, Edge *);
        double start2projection(double, double, Edge *);
        //calSP();
};
