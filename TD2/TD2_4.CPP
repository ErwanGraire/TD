#include <iostream>
#include <cstdlib>	
#include <ctime>
using namespace std;
#include "Point3D.hpp"




int main() {
	srand(static_cast<unsigned>(time(0)));
	Point3D point1;
	point1.print();
	Point3D point2(10,20,30);
	point2.print();
	float distance = point2.distanceTo(point1);
    cout << "Distance between points: " << distance << endl;
	float testx = point2.getX();
	cout << "Valeur de X pour le point 1" << testx;


	return 0;
}