
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_gnuEnvironment__
#define __gnu_CORBA_gnuEnvironment__

#pragma interface

#include <org/omg/CORBA/Environment.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class gnuEnvironment;
    }
  }
}

class gnu::CORBA::gnuEnvironment : public ::org::omg::CORBA::Environment
{

public:
  gnuEnvironment();
  virtual void clear();
  virtual void exception(::java::lang::Exception *);
  virtual ::java::lang::Exception * exception();
public: // actually protected
  ::java::lang::Exception * __attribute__((aligned(__alignof__( ::org::omg::CORBA::Environment)))) exception__;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_gnuEnvironment__
