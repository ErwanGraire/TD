#include <iostream>
#define multiplier(x,y)((x) * (y))
#include <cstdlib>  
using namespace std;

int main() {
	
	int a;
	int b;
	cout << "Entrer une valeur : " << endl;
	cin >> a;
	cout << "entrez une atre valeur :" << endl;
	cin >> b;
	cout << "Vos valeur sont " << a << " et " << b << endl;
	cout << multiplier(a + 1, b + 1) << endl;
	return 0;
	
}
