#include <iostream>
using namespace std;

class A {
public:
	virtual void f() const = 0;
};
class B : public A {
	int n;
public:
	B(int p = 1) : n(p) {}
	void f() const { std::cout << "B" << n; }
};
class C : public A {
	int n;
public:
	C(int p = 2) : n(p) {}
	void f() const { std::cout << "C" << n; }
};
class D : public C {
	int n;
public:
	D(int p = 4) : C(p) {}
};
void print(const A* a) { a->f(); }
void print(const B& a) { a.f(); }
void print(const C& a) { a.f(); }
void print(const D& a) { a.f(); }


int main() {
	B b(3);
	C c;
	D d;
	A* ab = &b;
	A* ac = &c;
	A* ad = &d;
	print(ab);
	print(ac);
	print(ad);
	print(b);
	print(c);
	print(d);
	return 0;
}