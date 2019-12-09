#ifndef GEOPOINT_H
#define GEOPOINT_H

class GeoPoint {
    public:
        /* Class members */
        double lat;
        double lon;
        int mmRoadId;
        
        /* Constructors and destructors */
        GeoPoint();
        GeoPoint(double, double, int);
        ~GeoPoint();

        /* Access modifiers */
        double getLat();
        double getLon();
        int getMmRoadId();
        void setLat(double);
        void setLon(double);
        void setMmRoadId(int);        

        double distM(GeoPoint *, GeoPoint *);
};

#endif
