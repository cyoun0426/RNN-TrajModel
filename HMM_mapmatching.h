#ifndef HMM_MAPMATCHING_H
#define HMM_MAPMATCHING_H

#include <list>
using namespace std;

#include "GeoPoint.h"
#include "RoadNet.h"

class MapMatcher {
    public:
        double cal_logEmiProb(GeoPoint *, int);
        double cal_logTransProb(GeoPoint *, GeoPoint *, int, int);
        bool MapMatching_kernel(list<GeoPoint *>&, double);
};

#endif
