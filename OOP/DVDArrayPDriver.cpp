#include <iostream>
#include "DVD.h"
#include "DVDArrayP.h"
using namespace std;

int main()
{
  DVD d1(1, "Avatar", "James Cameron");
  DVD d2(2, "How to Train your Dragon", "Chris Sanders");
  DVD d3(3, "The Fellowship of the Ring", "Peter Jackson");
  DVD d4(4, "Tangled", "Disney");
  DVDArrayP Movies(4);
  Movies[0] = d1; Movies[1] = d2; Movies[2] = d3; Movies[3] = d4;
  Movies.display();
  cout << endl;
  DVDArrayP Films(Movies);
  Films.display();
  return 0;
}
