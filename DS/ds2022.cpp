#include <iostream>
using namespace std;

class A
{
public:
	A() {cout << "A"; }
	virtual void f() const = 0;
};
class B : public A
{
	int n;
public:
	B(int p = 2) : n(p) {}
	void f() const { std::cout << "B" << n; }
};
class C : public A
{
	int n;
public:
	C(int p = 4) : n(p) {}
	void f() const { std::cout << "C" << n; }
};
void print(const A* a) { a->f(); }
void print(const B& a) { a.f(); }
void print(const C& a) { a.f(); }


int main() {
	B b(3);
	C c;
	A* ab = &b;
	A* ac = &c;
	print(ab);
	print(ac);
	print(b);
	print(c);
	return 0;
}
