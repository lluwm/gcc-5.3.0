
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_libxmlj_dom_GnomeXPathNSResolver__
#define __gnu_xml_libxmlj_dom_GnomeXPathNSResolver__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace libxmlj
      {
        namespace dom
        {
            class GnomeXPathNSResolver;
        }
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class gnu::xml::libxmlj::dom::GnomeXPathNSResolver : public ::java::lang::Object
{

public: // actually package-private
  GnomeXPathNSResolver(::org::w3c::dom::Node *);
public:
  virtual ::java::lang::String * lookupNamespaceURI(::java::lang::String *);
public: // actually package-private
  ::org::w3c::dom::Node * __attribute__((aligned(__alignof__( ::java::lang::Object)))) node;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_libxmlj_dom_GnomeXPathNSResolver__
