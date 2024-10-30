#include "Point3D.hpp"
#include <iostream>
constexpr size_t numberOfPoints = 10;

class Trajectory {
private:
    Point3D points[numberOfPoints];
public:
    void print() const {
        for (size_t i = 0; i < numberOfPoints; i++) {
            cout << i << ": ";
            points[i].print(); 
        }
    }

    Point3D& getPoint(int n) {
        if (n < 0 || n >= numberOfPoints) {
            cerr << "Erreur : indice hors limite." << endl;
            exit(1);
        }
        return points[n];
    }

    float getTotalDistance() const {
        float distancetot = 0;
        for (size_t i = 0; i < numberOfPoints - 1; i++) {
            distancetot += points[i].distanceTo(points[i + 1]);
        }
        return distancetot;
    }
};