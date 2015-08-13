/* book.cpp */
#include "private.h"
#include "public.h"

Book::Book()
{
  pimpl = new BookImpl();
}

Book::~Book()
{
  delete pimpl;
}

void Book::print()
{
  pimpl->print();
}

/* then BookImpl functions */

void Book::BookImpl::print()
{
  std::cout << "print from BookImpl" << std::endl;
}
