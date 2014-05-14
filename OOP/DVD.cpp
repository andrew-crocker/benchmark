#include <iostream>
#include "DVD.h"
using namespace std;

DVD::DVD (unsigned i, const char *t, const char *dir) {
 id = i;
 int k;
 for (k=0; t[k] != '\0'; ++k) ;
 title = new char[k+1];
 int n;
 for (n=0; n < k+1; ++n)
   title[n] = t[n];
 int j;
 for (j=0; dir[j] != '\0'; ++j) ;
 director = new char[j+1];
 for (int m=0; m < j+1; ++m)
   director[m] = dir[m];
}

DVD::DVD() {
 id = 0;
 title = new char[1];
 title[0] = '\0';
 director = new char[1];
 director[0] = '\0';
}

DVD::DVD(const DVD &d) {
 id = d.id;
 int k;
 for (k=0; d.title[k] != '\0'; ++k) ;
 title = new char[k+1];
 int n;
 for (n=0; n < k+1; ++n)
   title[n] = d.title[n];
 int j;
 for (j=0; d.director[j] != '\0'; ++j) ;
 director = new char[j+1];
 for (int m=0; m < j+1; ++m)
   director[m] = d.director[m];
}

DVD::~DVD() {
 delete [] title;
 delete [] director;
}

unsigned DVD::getId () {
 return id;
}

char* DVD::getTitle() {
 return title;
}

char* DVD::getDirector() {
 return director;
}

void DVD::display() {
 cout << "[" << id << ". " << title << "/" << director << "]" << endl;
}

void DVD::setId(unsigned i) {
 id = i;
}

void DVD::setTitle(const char* t) {
 delete [] title;
 int k;
 for (k=0; t[k] != '\0'; ++k) ;
 title = new char[k+1];
 int n;
 for (n=0; n < k+1; ++n)
   title[n] = t[n];
}

void DVD::setDirector(const char* t) {
 delete [] director;
 int k;
 for (k=0; t[k] != '\0'; ++k) ;
 director = new char[k+1];
 int n;
 for (n=0; n < k+1; ++n)
   director[n] = t[n];
}

void operator++(DVD &d) {
 ++(d.id);
}
