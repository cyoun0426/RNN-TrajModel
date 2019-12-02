#include "GeoPoint.h"

GeoPoint::GeoPoint() {
    lat = 0;
    lon = 0;
    mmRoadId = -1;
}

GeoPoint::GeoPoint(double lat, double lon, int mmRoadId) {
    this->lat = lat;
    this->lon = lon;
    this->mmRoadId = mmRoadId;
}

GeoPoint::~GeoPoint() { }

double GeoPoint::getLat() { return lat; }
double GeoPoint::getLon() { return lon; }
int GeoPoint::getMmRoadId() { return mmRoadId; }

void GeoPoint::setLat(double lat) { this->lat = lat; }
void GeoPoint::setLon(double lon) { this->lon = lon; }
void GeoPoint::setMmRoadId(double mmRoadId) { this->mmRoadId = mmRoadId; }
