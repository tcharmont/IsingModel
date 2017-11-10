#include "../src/Grid.hpp"
#include <iostream>

using namespace std;

int main() {
  
  Grid *grid = new Grid(10);

  if (grid->getSize() == 10) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  if (grid->getMagnetisation() == 0) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }

  exit(0);
}
