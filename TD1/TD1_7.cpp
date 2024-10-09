#include <iostream>
#include <vector>
#include <cstdlib>  
#include <ctime> 
using namespace std;

int main() {
    cout << "Nombre de cases dans le tableau : ";
    int n;
    cin >> n;

    vector<int> tab(n);

 
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 10;  
    }

   
    cout << "Les éléments du tableau sont : ";
    for (int a = 0; a < n; a++) {
       cout << tab[a] << " ";
    }
    cout << endl;  

    return 0;
}
