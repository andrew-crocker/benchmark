#ifndef _DVDArrayP_
#define _DVDArrayP_

class DVDArrayP {
  DVD ** elt;
  unsigned size;
 public:
  static unsigned DEFAULT_SIZE;
  DVDArrayP(unsigned sz);
  DVDArrayP();
  DVDArrayP(const DVDArrayP &d);
  ~DVDArrayP();
  unsigned getSize();
  void display();
  DVD &operator[](const unsigned i);
  DVDArrayP &operator=(DVDArrayP &d);
};

#endif // _DVDArrayP_
