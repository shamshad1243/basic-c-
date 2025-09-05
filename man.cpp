#include <iostream>
using namespace std;

// ---------- Multiple Inheritance ----------
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};
class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};
class C : public A, public B {   // Multiple inheritance
public:
    void showC() {
        cout << "Class C (Multiple Inheritance)" << endl;
    }
};

// ---------- Multilevel Inheritance ----------
class X {
public:
    void showX() {
        cout << "Class X" << endl;
    }
};
class Y : public X {
public:
    void showY() {
        cout << "Class Y (Derived from X)" << endl;
    }
};
class Z : public Y {   // Multilevel inheritance
public:
    void showZ() {
        cout << "Class Z (Derived from Y -> X)" << endl;
    }
};
int main() {
    cout << "--- Multiple Inheritance Example ---" << endl;
    C obj1;
    obj1.showA();
    obj1.showB();
    obj1.showC();
    cout << "\n--- Multilevel Inheritance Example ---" << endl;
    Z obj2;
    obj2.showX();
    obj2.showY();
    obj2.showZ();
    return 0;
}
