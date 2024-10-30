#include <iostream>
#include <cstdlib>
using namespace std;

class Point3D {
private:
    float x, y, z; // private attributes
public:
    // Constructeur par d�faut pour initialiser avec des valeurs al�atoires
    Point3D() {
        x = static_cast<float>(rand() % 101);
        y = static_cast<float>(rand() % 101);
        z = static_cast<float>(rand() % 101);
    }

    // Constructeur avec valeurs sp�cifiques
    Point3D(const float& newx, const float& newy, const float& newz) : x(newx), y(newy), z(newz) {}

    // Setters and getters
    void setXYZ(const float& newx, const float& newy, const float& newz) {
        x = newx;
        y = newy;
        z = newz;
    }

    float getX() const { return x; }
    float getY() const { return y; }
    float getZ() const { return z; }

    // M�thode pour afficher les coordonn�es
    void print() const {
        cout << "Le point 3D est aux coordonnees : (" << x << "," << y << "," << z << ")" << endl;
    }

    // M�thode pour calculer la distance avec un autre point
    float distanceTo(const Point3D& otherPoint3D) const {
        float dx = x - otherPoint3D.getX();
        float dy = y - otherPoint3D.getY();
        float dz = z - otherPoint3D.getZ();
        return sqrt(dx * dx + dy * dy + dz * dz);
    }
};
