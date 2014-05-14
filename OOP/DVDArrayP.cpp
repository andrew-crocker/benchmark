#include <iostream>
#include <cstdlib>
#include "DVD.h"
#include "DVDArrayP.h"
using namespace std;

unsigned DVDArrayP::DEFAULT_SIZE = 3;

DVDArrayP::DVDArrayP(unsigned sz) {
  size = sz;
  elt = new DVD * [size];
  for (unsigned i = 0; i < size; ++i)
    elt[i] = 0;
}

DVDArrayP::DVDArrayP() {
  size = DEFAULT_SIZE;
  elt = new DVD * [size];
  for (unsigned i = 0; i < size; ++i)
    elt[i] = 0;
}

DVDArrayP::DVDArrayP(const DVDArrayP &d) {
  size = d.size;
  elt = new DVD * [size];
  for (unsigned i = 0; i < size;++i)
    elt[i] = d.elt[i];
}

DVDArrayP::~DVDArrayP(){
  for (unsigned i = 0; i < size; ++i)
    delete elt[i];
  delete [] elt;
}

unsigned DVDArrayP::getSize() {
  return size;
}

void DVDArrayP::display() {
  for (unsigned i = 0; i < size; ++i){
    cout << i << ": [" << elt[i]->getId() << ". " << elt[i]->getTitle() << "/" << elt[i]->getDirector() << "]" << endl;
  }
}

DVD &DVDArrayP::operator[](const unsigned i) {
  if (i > (size-1)) {
    cout << "Error! i is an invalid array index." << endl;
    exit(0);
  }
  else{
    elt[i] = new DVD;
    return *elt[i];
  }
}

DVDArrayP& DVDArrayP::operator=(DVDArrayP &da) {
  size = da.getSize();
  for (unsigned i = 0; i < size; ++i)
    delete elt[i];
  delete [] elt;
  elt = new DVD * [size];
  for (unsigned i = 0; i < size; ++i){
    elt[i] = new DVD(*da.elt[i]);
  }
  return *this;
}
