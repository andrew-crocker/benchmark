#ifndef _DVD_
#define _DVD_

class DVD {
 unsigned id;
 char * title;
 char * director;
public:
 DVD ();
 DVD (unsigned i, const char *t, const char *dir);
 DVD (const DVD &d);
 ~DVD ();
 unsigned getId();
 char* getTitle();
 char* getDirector();
 void display();
 void setId(unsigned i);
 void setTitle(const char *t);
 void setDirector(const char *t);
 friend void operator++(DVD &d);
};

#endif // _DVD_
