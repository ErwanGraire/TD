#include <iostream>
using namespace std;
class A {
public:
	A() { x = 0; cout << "1"; }
	A(int px) { x = px; cout << "2"; }
	A(const A& pa) { x = pa.x; cout << "3"; }
protected:
	int x;
};
class B {
public:
	B(const A& pa = A()) : a(pa) { cout << "4"; }
	B(const A& pa, int py) { a = pa; y = py; cout << "5"; }
protected:
	A a;
	int y;
};
class C : public B {
public:
	C(int pz = 1) { z = pz; cout << "6"; }
	C(A pa) : B(pa) { z = 0; cout << "7"; }
	C(const B& pb) : B(pb), a(1) { z = 0; cout << "8"; }
protected:
	A a;
	int z;
};



int main() {
	cout << "-- A --\n";
	A a0; cout << endl;  //utilise la classe A par défaut avec A() vu qu'il n'a pas de valeur et affiche comme convenu 1
	A a1(3); cout << endl; //utilise la classe A avec un int donc on utilise la deuxième classe et affiche 2
	A a2(a1); cout << endl;//utilise un point en paramètre donc c'est la 3ème fonction et affiche donc 3
	A a3 = a2; cout << endl;// autre notation pour mettre en paramètre et c'est une variable donc ca affiche 3
	a3 = a1; cout << endl;
	cout << "-- B --\n";
	B b0(a0,3); cout << endl;//met en paramètre une variable et un int donc on utilise la 2ème fonction de B. On affiche 15
	B b1(a1); cout << endl;//on a qu'une variable on utilise la première fonction de B avec a1=3 donc on affiche 34
	B b3; cout << endl;
	B b2; cout << endl; //affiche 134 
	cout << "-- C --\n";
	C c0; cout << endl;
	C c1(a1); cout << endl;
	C c2(b2); cout << endl;
}
