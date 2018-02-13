#include <iostream>

using namespace std;

double* create() {
  return new double; // returns memory address assigned for double 8B
}

void createDoubleObjectByRef(double *&pointer) {
  pointer = new double;

  cout << "Create Function here" << endl;
  cout << pointer << endl;
  cout << &pointer << endl;
}

int fakeMain() {
  double *w = nullptr;

  cout << "Fake Main here" << endl;
  cout << w << endl; // value of w
  cout << &w << endl; // mem address of w

  createDoubleObjectByRef(w);

  cout << "Fake Main again.." << endl;
  cout << w << endl; //value
  cout << &w << endl; // memory
  

  delete w;
  return 2137;
}

int main() {
  double *w = nullptr;

  cout << w << endl;

  w = create();
  cout << w << endl;

  *w = 10;

  cout << *w << endl;

  delete w;
  cout << endl;
  cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
  cout << endl;

  fakeMain();

  system("pause");
}