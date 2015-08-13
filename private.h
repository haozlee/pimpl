/* private.h */
#ifndef PRIVATE_H_INCLUDED
#define PRIVATE_H_INCLUDED

#include "public.h"
#include <iostream>

class Book::BookImpl
{
public:
  void print();

private:
  std::string  m_Contents;
  std::string  m_Title;
};

#endif
