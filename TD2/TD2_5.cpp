#include <iostream>
#include <ctime>
#include "Trajectory.hpp"

int main() {
    srand(static_cast<unsigned>(time(0)));

    Trajectory traj1;

    // Afficher tous les points de la trajectoire
    traj1.print();

    // Calculer et afficher la distance totale
    float distanceTotal = traj1.getTotalDistance();
    cout << "Distance totale de la trajectoire : " << distanceTotal << endl;

    return 0;
}